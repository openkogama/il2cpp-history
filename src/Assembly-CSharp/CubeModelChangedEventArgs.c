
/* String ToString() */

String * Assembly-CSharp.dll::CubeModelChangedEventArgs::CubeModelChangedEventArgs_ToString
                   (CubeModelChangedEventArgs *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeAction);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_8 = CONCAT31(uStackX_8._1_3_,(this->fields).Action);
  arg0 = (Object *)FUN_?(TypeInfo__MV__WorldObject__CubeAction,&uStackX_8);
  uStackX_8._0_2_ = (this->fields).Pos.x;
  uStackX_8._2_2_ = (this->fields).Pos.y;
  iStackX_c = (this->fields).Pos.z;
  arg1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__IntVector,&uStackX_8);
  pSVar1 = StringLiteral__0___1_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_2,arg0,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* CubeModelChangedEventArgs(CubeAction, IntVector, MVCubeModelBase) */

void Assembly-CSharp.dll::CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
               (CubeModelChangedEventArgs *this,CubeAction__Enum action,IntVector *pos,
               MVCubeModelBase *sender,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = iRam_? != 0;
  iVar2 = pos->y;
  (this->fields).Pos.x = pos->x;
  (this->fields).Pos.y = iVar2;
  (this->fields).Pos.z = pos->z;
  (this->fields).Action = (uint8_t)action;
  (this->fields).Sender = sender;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)&(this->fields).Sender >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

