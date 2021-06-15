
/* LineDrawManager+LinkLine(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::LineDrawManager+LinkLine::LineDrawManager_LinkLine__ctor
               (LineDrawManager_LinkLine *this,Vector3 startPos,Vector3 endPos,Color color,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).startPos.x = startPos.x;
  (this->fields).startPos.y = startPos.y;
  (this->fields).endPos.x = endPos.x;
  (this->fields).endPos.y = endPos.y;
  (this->fields).startPos.z = startPos.z;
  (this->fields).endPos.z = endPos.z;
  (this->fields).color.r = color.r;
  (this->fields).color.g = color.g;
  (this->fields).color.b = color.b;
  (this->fields).color.a = color.a;
  return;
}

