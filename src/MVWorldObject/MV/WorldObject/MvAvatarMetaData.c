
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData_ToString
                   (MvAvatarMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_avatarID___0___name___1___priceG);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  iStack_1 = (this->fields).avatarID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    pSVar5 = (this->fields).name;
    if (pSVar5 != (String *)0x0) {
      iVar4 = func_?(pSVar5,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar5;
    func_?(args->vector + 1,pSVar5);
    iStack_6 = (this->fields).priceGold;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    func_?(args->vector + 2,pOVar2);
    bStack_7 = (this->fields).isOnMarketPlace;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    func_?(args->vector + 3,pOVar2);
    bStack_8 = (this->fields).canBeSoldOnMarketPlace;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (4 < args->max_length) {
      args->vector[4] = pOVar2;
      func_?(args->vector + 4,pOVar2);
      pSVar5 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_avatarID___0___name___1___priceG,args,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar9)();
  return pSVar5;
}


/* MvAvatarMetaData(BytePacker) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
               (MvAvatarMetaData *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pMVar1 = (MethodInfo *)&(this->fields).name;
  (this->fields).avatarID = -1;
  *(String **)pMVar1 = ::StringLiteral__;
  func_?(pMVar1,::StringLiteral__);
  (this->fields).priceGold = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  if (bp != (BytePacker *)0x0) {
    iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    (this->fields).avatarID = iVar2;
    count = 0;
    iVar3 = 0;
    do {
      if (iVar3 == 0x23) goto code_?;
      uVar4 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      count = count | (uVar4 & 0x7f) << ((byte)iVar3 & 0x1f);
      iVar3 = iVar3 + 7;
    } while ((char)uVar4 < '\0');
    pBVar5 = bp;
    BytePacker::BytePacker_ReadBytes(bp,count,(MethodInfo *)0x0);
    pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar6 != (Encoding *)0x0) {
      pBVar7 = (BytePacker__Class *)(*(code *)(pEVar6->klass->vtable).GetString.method)();
      pBVar5->klass = pBVar7;
      func_?();
      iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      (pBVar7->_0).byval_arg.data.__klassIndex = iVar2;
      uVar4 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      *(bool *)&(pBVar7->_0).byval_arg.attrs = uVar4 != 0;
      uVar4 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      *(bool *)((int)&(pBVar7->_0).byval_arg.attrs + 1) = uVar4 != 0;
      return;
    }
  }
  func_?();
code_?:
  uVar8 = func_?(&TypeInfo__System__FormatException);
  this_00 = (FormatException *)func_?(uVar8);
  pMVar1 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Error_in_the_byte_stream__too_ma);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,message,pMVar1);
  func_?(&MethodInfo__MV__WorldObject__BytePacker__Read7BitEncodedInt__);
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

