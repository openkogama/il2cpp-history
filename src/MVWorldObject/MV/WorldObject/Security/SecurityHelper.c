
/* String Decrypt(String) */

String * MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Decrypt
                   (String *inputText,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this = (RijndaelManaged *)
         func_?(TypeInfo__System__Security__Cryptography__RijndaelManaged);
  mscorlib.dll::System::Security::Cryptography::RijndaelManaged::RijndaelManaged__ctor
            (this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?();
  }
  buffer = mscorlib.dll::System::Convert::Convert_FromBase64String(inputText,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__Security__SecurityHelper->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_started == 0)) {
    func_?();
  }
  if (this != (RijndaelManaged *)0x0) {
    transform = (ICryptoTransform *)(*(code *)(this->klass->vtable).CreateDecryptor_1.method)();
    uStack_1 = 0;
    this_00 = (MemoryStream *)func_?(TypeInfo__System__IO__MemoryStream);
    mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor_2(this_00,buffer,(MethodInfo *)0x0);
    uStack_1._0_1_ = 1;
    this_01 = (CryptoStream *)func_?();
    mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream__ctor
              (this_01,(Stream *)this_00,transform,CryptoStreamMode__Enum_Read,(MethodInfo *)0x0);
    uStack_1 = CONCAT31(uStack_1._1_3_,2);
    if (buffer != (Byte__Array *)0x0) {
      iVar4 = func_?();
      if ((iVar4 != 0) && (this_01 != (CryptoStream *)0x0)) {
        (*(code *)(this_01->klass->vtable).Read.method)(this_01);
        if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
          func_?();
        }
        pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_Unicode((MethodInfo *)0x0);
        if (pEVar5 != (Encoding *)0x0) {
          pSVar6 = (String *)(*(code *)(pEVar5->klass->vtable).GetString.method)(pEVar5);
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          puVar7 = (undefined *)0x7c;
          if (this_01 != (CryptoStream *)0x0) {
            puVar7 = &UNK_?;
            func_?();
          }
          if (puVar7 == (undefined *)0x7c) {
            uStack_1 = uStack_1 & 0xffffff00;
          }
          else {
            uStack_1 = 0;
          }
          if (this_00 != (MemoryStream *)0x0) {
            func_?();
          }
          uStack_1 = 0xffffffff;
          if (transform != (ICryptoTransform *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_3;
          return pSVar6;
        }
      }
    }
  }
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}


/* SecurityHelper() */

void MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    pBVar2 = (Byte__Array *)
             (*(code *)(pEVar1->klass->vtable).GetBytes_1.method)
                       (pEVar1,StringLiteral_P63oUa9unCY,
                        (pEVar1->klass->vtable).GetBytes_2.methodPtr);
    TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT = pBVar2;
    pBVar2 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT;
    pRVar3 = (Rfc2898DeriveBytes *)
             func_?(TypeInfo__System__Security__Cryptography__Rfc2898DeriveBytes);
    mscorlib.dll::System::Security::Cryptography::Rfc2898DeriveBytes::Rfc2898DeriveBytes__ctor
              (pRVar3,StringLiteral_P63oUa9unCY,pBVar2,(MethodInfo *)0x0);
    TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator = pRVar3;
    pRVar3 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
    if (pRVar3 != (Rfc2898DeriveBytes *)0x0) {
      pBVar2 = (Byte__Array *)(*(code *)(pRVar3->klass->vtable).GetBytes.method)(pRVar3,0x20);
      TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key = pBVar2;
      pRVar3 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
      if (pRVar3 != (Rfc2898DeriveBytes *)0x0) {
        pBVar2 = (Byte__Array *)(*(code *)(pRVar3->klass->vtable).GetBytes.method)(pRVar3,0x10);
        TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv = pBVar2;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

