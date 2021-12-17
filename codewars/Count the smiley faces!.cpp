bool isSmiley(std::string face) {
  if (face[0] != ';' && face[0] != ':') {
      return false;
  }
  
  if (face.length() == 2) {

    if (face[1] != ')' && face[1] != 'D') {
      return false;
    }
    
    return true;
  } else {
    if (face[1] != '-' && face[1] != '~') {
      return false;
    }
    
    if (face[2] != ')' && face[2] != 'D') {
      return false;
    }
    
    return true;
  }
  
}

int countSmileys(std::vector<std::string> arr)
{
  int result = 0;
  int size = arr.size();
  for (int i = 0; i < size; ++i) {
    if (isSmiley(arr[i])) {
      result++;
    }
  }
  
  return result;
}
