
/* Vector2 get_SizeEps() */

Vector2 Assembly-CSharp.dll::RTG::QuadEpsilon::QuadEpsilon_get_SizeEps
                  (QuadEpsilon *this,MethodInfo *method)

{
  return this->_sizeEps;
}


/* Void set_SizeEps(Vector2) */

void Assembly-CSharp.dll::RTG::QuadEpsilon::QuadEpsilon_set_SizeEps
               (QuadEpsilon *this,Vector2 value,MethodInfo *method)

{
  fStackX_8 = value.x;
  (this->_sizeEps).x = (float)((uint)fStackX_8 & _UNK_?);
  fStackX_c = value.y;
  (this->_sizeEps).y = (float)((uint)fStackX_c & _UNK_?);
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::QuadEpsilon::QuadEpsilon_set_WireEps
               (QuadEpsilon *this,float value,MethodInfo *method)

{
  this->_wireEps = (float)((uint)value & _UNK_?);
  return;
}

