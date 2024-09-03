
/* Void set_SizeEps(Vector2) */

void Assembly-CSharp.dll::RTG::QuadEpsilon::QuadEpsilon_set_SizeEps(QuadEpsilon *this,Vector2 value,MethodInfo *method)

{
  (this->_sizeEps).x = ABS(value.x);
  (this->_sizeEps).y = ABS(value.y);
  return;
}

