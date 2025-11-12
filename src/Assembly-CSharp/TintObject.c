
/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::TintObject::TintObject_TeamTint
               (TintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Blue) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
  }
  else if (team == MVTeam__Enum_Red) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamRed;
  }
  else if (team == MVTeam__Enum_Green) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
  }
  else {
    if (team != MVTeam__Enum_Yellow) {
      pIVar1 = (this->klass->vtable).Tint.methodPtr;
      (*pIVar1)(this,pIVar1,_UNK_?,_UNK_?,_UNK_?,
                (this->klass->vtable).Tint.method);
      return;
    }
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
  }
  pCVar2 = Styles::Styles_GetColor(&CStack_3,colorStyle,(MethodInfo *)0x0);
  CStack_3.r = pCVar2->r;
  CStack_3.g = pCVar2->g;
  CStack_3.b = pCVar2->b;
  CStack_3.a = pCVar2->a;
  (*(this->klass->vtable).__unknown.methodPtr)
            (this,&CStack_3,(this->klass->vtable).__unknown.method);
  return;
}


/* Void Tint(Single, Single, Single, Single) */

void Assembly-CSharp.dll::TintObject::TintObject_Tint
               (TintObject *this,float r,float g,float b,float a,MethodInfo *method)

{
  fStack_1 = a;
  fStack_2 = r;
  fStack_3 = g;
  fStack_4 = b;
  (*(this->klass->vtable).__unknown.methodPtr)(a,&fStack_2,(this->klass->vtable).__unknown.method);
  return;
}

