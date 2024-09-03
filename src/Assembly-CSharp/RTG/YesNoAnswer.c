
/* Void No() */

void Assembly-CSharp.dll::RTG::YesNoAnswer::YesNoAnswer_No(YesNoAnswer *this,MethodInfo *method)

{
  (this->fields)._hasNo = 1;
  return;
}


/* Boolean get_HasOnlyYes() */

bool Assembly-CSharp.dll::RTG::YesNoAnswer::YesNoAnswer_get_HasOnlyYes
               (YesNoAnswer *this,MethodInfo *method)

{
  if ((this->fields)._hasYes == 0) {
    return 0;
  }
  return (this->fields)._hasNo == 0;
}

