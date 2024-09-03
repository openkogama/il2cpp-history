
/* Void set_SizeEps(Vector2) */

void Assembly-CSharp.dll::RTG::QuadEpsilon::QuadEpsilon_set_SizeEps
               (QuadEpsilon *this,Vector2 value,MethodInfo *method)

{
  fVar1 = (float)((uint)value.y & _UNK_?);
  (this->_sizeEps).x = (float)((uint)value.x & _UNK_?);
  (this->_sizeEps).y = fVar1;
  return;
}

