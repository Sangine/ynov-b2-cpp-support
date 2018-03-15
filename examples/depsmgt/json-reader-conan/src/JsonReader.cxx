// Using https://github.com/nlohmann/json for json processing
#include <nlohmann/json.hpp>
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

// for convenience
using json = nlohmann::json;

/** @brief Get mask description file name
 *
 *  @param argc argc count
 *  @param args
 *  @return ITK Image poiter
 */
std::string GetMaskDescriptionFileName(int argc, char*argv[]);

/** @brief Get mask file name
 *
 *  @param argc argc count
 *  @param args
 *  @return ITK Image poiter
 */
std::string GetMaskFileName(int argc, char*argv[]);

int main(int argc, char*argv[]) {
  std::ifstream ifs(GetMaskDescriptionFileName(argc, argv));
  json j = json::parse(ifs);

  for (json& roiJson : j["rois"]) {
    std::vector<std::vector<int>> roi = roiJson;
    for (unsigned i=1; i < roi.size(); i++) {
      std::cout << roi[i-1][0] << " - " << roi[i-1][1] << " to " << roi[i][0] << " - " << roi[i][1] << std::endl;

    }
  }

  return EXIT_SUCCESS;
}


std::string GetMaskDescriptionFileName(int argc, char*argv[]) {

  std::string filename;
  if (argc > 1) {
    filename = argv[1];
  } else {
    filename = "../resources/mask.json";
  }
  return filename;
}

std::string GetMaskFileName(int argc, char*argv[]) {

  std::string filename;
  if (argc > 1) {
    filename = argv[2];
  } else {
    filename = "test.png";
  }
  return filename;
}
