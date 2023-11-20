
/* String Decrypt(String) */

String * MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Decrypt
                   (String *inputText,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Security__Cryptography__CryptoStream);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__IO__MemoryStream);
    func_?(&TypeInfo__System__Security__Cryptography__RijndaelManaged);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    cRam_? = '\x01';
  }
  this = (RijndaelManaged *)
         func_?(TypeInfo__System__Security__Cryptography__RijndaelManaged);
  mscorlib.dll::System::Security::Cryptography::RijndaelManaged::RijndaelManaged__ctor
            (this,(MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  buffer = mscorlib.dll::System::Convert::Convert_FromBase64String(inputText,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uVar4 = (undefined1)uStack_1;
  if (this != (RijndaelManaged *)0x0) {
    transform = (ICryptoTransform *)(*(code *)(this->klass->vtable).CreateDecryptor_1.method)();
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    this_00 = (MemoryStream *)func_?(TypeInfo__System__IO__MemoryStream);
    mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor_2(this_00,buffer,(MethodInfo *)0x0);
    uStack_1._0_1_ = 3;
    this_01 = (CryptoStream *)func_?();
    mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream__ctor
              (this_01,(Stream *)this_00,transform,CryptoStreamMode__Enum_Read,(MethodInfo *)0x0);
    uStack_1._0_1_ = 5;
    uVar4 = (undefined1)uStack_1;
    uStack_1._0_1_ = 5;
    if (buffer != (Byte__Array *)0x0) {
      iVar5 = func_?();
      uVar4 = (undefined1)uStack_1;
      if ((iVar5 != 0) && (this_01 != (CryptoStream *)0x0)) {
        (*(code *)(this_01->klass->vtable).Read.method)(this_01);
        pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_Unicode((MethodInfo *)0x0);
        uVar4 = (undefined1)uStack_1;
        if (pEVar6 != (Encoding *)0x0) {
          pSVar7 = (String *)(*(code *)(pEVar6->klass->vtable).GetString_1.method)(pEVar6);
          uStack_1._0_1_ = 3;
          if (this_01 != (CryptoStream *)0x0) {
            func_?();
          }
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          if (this_00 != (MemoryStream *)0x0) {
            func_?();
          }
          uStack_1 = 0xffffffff;
          if (transform != (ICryptoTransform *)0x0) {
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return pSVar7;
          }
          *unaff_FS_OFFSET = uStack_3;
          return pSVar7;
        }
      }
    }
  }
  uStack_1._0_1_ = uVar4;
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* String Encrypt(String) */

String * MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                   (String *inputText,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Security__Cryptography__CryptoStream);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__IO__MemoryStream);
    func_?(&TypeInfo__System__Security__Cryptography__RijndaelManaged);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    cRam_? = '\x01';
  }
  this = (RijndaelManaged *)
         func_?(TypeInfo__System__Security__Cryptography__RijndaelManaged);
  mscorlib.dll::System::Security::Cryptography::RijndaelManaged::RijndaelManaged__ctor
            (this,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (this != (RijndaelManaged *)0x0) {
    (*(code *)(this->klass->vtable).set_Key.method)(this);
    (*(code *)(this->klass->vtable).set_IV.method)
              (this,TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv,
               (this->klass->vtable).get_Key.methodPtr);
    pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_get_Unicode((MethodInfo *)0x0);
    if (pEVar4 != (Encoding *)0x0) {
      iVar5 = (*(code *)(pEVar4->klass->vtable).GetBytes_1.method)(pEVar4);
      transform = (ICryptoTransform *)
                  (*(code *)(this->klass->vtable).CreateEncryptor.method)
                            (this,(this->klass->vtable).CreateEncryptor_1.methodPtr);
      uStack_1._0_1_ = 1;
      uStack_1._1_3_ = 0;
      this_00 = (MemoryStream *)func_?(TypeInfo__System__IO__MemoryStream);
      mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor(this_00,(MethodInfo *)0x0);
      uStack_1._0_1_ = 3;
      this_01 = (CryptoStream *)func_?();
      mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream__ctor
                (this_01,(Stream *)this_00,transform,CryptoStreamMode__Enum_Write,(MethodInfo *)0x0)
      ;
      uStack_1 = CONCAT31(uStack_1._1_3_,5);
      if ((iVar5 != 0) && (this_01 != (CryptoStream *)0x0)) {
        (*(code *)(this_01->klass->vtable).Write.method)(this_01,iVar5,0);
        if (this_01 != (CryptoStream *)0x0) {
          mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream_FlushFinalBlock
                    (this_01,(MethodInfo *)0x0);
          if (this_00 != (MemoryStream *)0x0) {
            inArray = (Byte__Array *)(*(code *)(this_00->klass->vtable).ToArray.method)();
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar6 = mscorlib.dll::System::Convert::Convert_ToBase64String
                               (inArray,(MethodInfo *)0x0);
            uStack_1._0_1_ = 3;
            if (this_01 != (CryptoStream *)0x0) {
              func_?();
            }
            uStack_1 = CONCAT31(uStack_1._1_3_,1);
            if (this_00 != (MemoryStream *)0x0) {
              func_?();
            }
            uStack_1 = 0xffffffff;
            if (transform != (ICryptoTransform *)0x0) {
              func_?();
              *unaff_FS_OFFSET = uStack_3;
              return pSVar6;
            }
            *unaff_FS_OFFSET = uStack_3;
            return pSVar6;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  uVar7 = func_?();
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}


/* SecurityHelper() */

void MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Security__Cryptography__Rfc2898DeriveBytes);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&StringLiteral_P63oUa9unCY);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    pBVar2 = (Byte__Array *)
             (*(code *)(pEVar1->klass->vtable).GetBytes_1.method)
                       (pEVar1,StringLiteral_P63oUa9unCY,
                        (pEVar1->klass->vtable).GetBytes_2.methodPtr);
    TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT = pBVar2;
    func_?(TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields,pBVar2);
    pBVar2 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT;
    pRVar3 = (Rfc2898DeriveBytes *)
             func_?(TypeInfo__System__Security__Cryptography__Rfc2898DeriveBytes);
    mscorlib.dll::System::Security::Cryptography::Rfc2898DeriveBytes::Rfc2898DeriveBytes__ctor_1
              (pRVar3,StringLiteral_P63oUa9unCY,pBVar2,(MethodInfo *)0x0);
    TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator = pRVar3;
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->
                     keyGenerator,pRVar3);
    pRVar3 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
    if (pRVar3 != (Rfc2898DeriveBytes *)0x0) {
      pBVar2 = (Byte__Array *)(*(code *)(pRVar3->klass->vtable).GetBytes.method)(pRVar3,0x20);
      TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key = pBVar2;
      func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key,
                      pBVar2);
      pRVar3 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
      if (pRVar3 != (Rfc2898DeriveBytes *)0x0) {
        pBVar2 = (Byte__Array *)(*(code *)(pRVar3->klass->vtable).GetBytes.method)(pRVar3,0x10);
        TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv = pBVar2;
        func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv,
                        pBVar2);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

