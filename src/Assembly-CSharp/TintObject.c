
/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::TintObject::TintObject_TeamTint
               (TintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
    break;
  case MVTeam__Enum_Red:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
    break;
  case MVTeam__Enum_Green:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
    break;
  case MVTeam__Enum_Yellow:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
    break;
  default:
    (*(code *)(this->klass->vtable).Tint.method)
              (this,0x3f800000,0x3f800000,0x3f800000,0x3f800000,this->klass[1]._0.image);
    return;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  CStack_2.r = pCVar1->a;
  CStack_2.g = (float)(this->klass->vtable).TeamTint.methodPtr;
  (*(code *)(this->klass->vtable).__unknown.method)(this,pCVar1->r,pCVar1->g,pCVar1->b);
  return;
}


/* Void Tint(Single, Single, Single, Single) */

void Assembly-CSharp.dll::TintObject::TintObject_Tint
               (TintObject *this,float r,float g,float b,float a,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).__unknown.method)
            (this,r,g,b,a,(this->klass->vtable).TeamTint.methodPtr);
  return;
}

