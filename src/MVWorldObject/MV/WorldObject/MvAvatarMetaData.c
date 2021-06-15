
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData_ToString
                   (MvAvatarMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  iStack_1 = (this->fields).avatarID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    pSVar5 = (this->fields).name;
    if (pSVar5 != (String *)0x0) {
      iVar4 = func_?(pSVar5,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar5;
    iStack_6 = (this->fields).priceGold;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    bStack_7 = (this->fields).isOnMarketPlace;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    bStack_8 = (this->fields).canBeSoldOnMarketPlace;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (4 < args->max_length) {
        args->vector[4] = pOVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_avatarID___0___name___1___priceG,args,(MethodInfo *)0x0);
        return pSVar5;
      }
      goto code_?;
    }
    iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar9 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar9)();
  return pSVar5;
}


/* MvAvatarMetaData(BytePacker) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
               (MvAvatarMetaData *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).avatarID = -1;
  (this->fields).name = ::StringLiteral__;
  (this->fields).priceGold = -1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (bp != (BytePacker *)0x0) {
    iVar1 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    (this->fields).avatarID = iVar1;
    pSVar2 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
    (this->fields).name = pSVar2;
    iVar1 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    (this->fields).priceGold = iVar1;
    bVar3 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
    (this->fields).isOnMarketPlace = bVar3;
    bVar3 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
    (this->fields).canBeSoldOnMarketPlace = bVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

