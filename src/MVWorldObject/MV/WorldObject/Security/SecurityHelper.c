
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
  if (this != (RijndaelManaged *)0x0) {
    mscorlib.dll::System::Security::Cryptography::RijndaelManaged::RijndaelManaged__ctor
              (this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    buffer = mscorlib.dll::System::Convert::Convert_FromBase64String(inputText,(MethodInfo *)0x0);
    if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    transform = (ICryptoTransform *)(*(this->klass->vtable).CreateDecryptor_1.methodPtr)();
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    this_00 = (MemoryStream *)func_?(TypeInfo__System__IO__MemoryStream);
    if (this_00 != (MemoryStream *)0x0) {
      mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor_2(this_00,buffer,(MethodInfo *)0x0)
      ;
      uStack_1._0_1_ = 3;
      this_01 = (CryptoStream *)func_?();
      if (this_01 != (CryptoStream *)0x0) {
        mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream__ctor
                  (this_01,(Stream *)this_00,transform,CryptoStreamMode__Enum_Read,(MethodInfo *)0x0
                  );
        uStack_1._0_1_ = 5;
        if (buffer != (Byte__Array *)0x0) {
          iVar4 = func_?(TypeInfo__System__Byte,buffer->max_length);
          if ((iVar4 != 0) && (this_01 != (CryptoStream *)0x0)) {
            uVar5 = (*(this_01->klass->vtable).Read.methodPtr)
                              (this_01,iVar4,0,*(undefined4 *)(iVar4 + 0xc),
                               (this_01->klass->vtable).Read.method);
            pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_Unicode((MethodInfo *)0x0);
            if (pEVar6 != (Encoding *)0x0) {
              pSVar7 = (String *)
                       (*(pEVar6->klass->vtable).GetString_1.methodPtr)
                                 (pEVar6,iVar4,0,uVar5,(pEVar6->klass->vtable).GetString_1.method);
              uStack_1._0_1_ = 3;
              if (this_01 != (CryptoStream *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,this_01);
              }
              uStack_1 = CONCAT31(uStack_1._1_3_,1);
              if (this_00 != (MemoryStream *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,this_00);
              }
              uStack_1 = 0xffffffff;
              if (transform != (ICryptoTransform *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,transform);
                *unaff_FS_OFFSET = uStack_3;
                return pSVar7;
              }
              *unaff_FS_OFFSET = uStack_3;
              return pSVar7;
            }
          }
        }
      }
    }
  }
  uVar5 = func_?();
  uVar5 = func_?(uVar5);
  uVar5 = func_?(uVar5);
  func_?(uVar5);
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* String Encrypt(String) */

String * MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                   (String *inputText,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
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
  if (this != (RijndaelManaged *)0x0) {
    mscorlib.dll::System::Security::Cryptography::RijndaelManaged::RijndaelManaged__ctor
              (this,(MethodInfo *)0x0);
    if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    (*(this->klass->vtable).set_Key.methodPtr)(this);
    (*(this->klass->vtable).set_IV.methodPtr)
              (this,TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv,
               (this->klass->vtable).set_IV.method);
    pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_get_Unicode((MethodInfo *)0x0);
    if (pEVar4 != (Encoding *)0x0) {
      iVar5 = (*(pEVar4->klass->vtable).GetBytes_1.methodPtr)
                        (pEVar4,inputText,(pEVar4->klass->vtable).GetBytes_1.method);
      transform = (ICryptoTransform *)
                  (*(this->klass->vtable).CreateEncryptor.methodPtr)
                            (this,(this->klass->vtable).CreateEncryptor.method);
      uStack_1._0_1_ = 1;
      uStack_1._1_3_ = 0;
      this_00 = (MemoryStream *)func_?(TypeInfo__System__IO__MemoryStream);
      if (this_00 != (MemoryStream *)0x0) {
        mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor(this_00,(MethodInfo *)0x0);
        uStack_1._0_1_ = 3;
        this_01 = (CryptoStream *)func_?();
        if (this_01 != (CryptoStream *)0x0) {
          mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream__ctor
                    (this_01,(Stream *)this_00,transform,CryptoStreamMode__Enum_Write,
                     (MethodInfo *)0x0);
          uStack_1._0_1_ = 5;
          if ((iVar5 != 0) && (this_01 != (CryptoStream *)0x0)) {
            (*(this_01->klass->vtable).Write.methodPtr)
                      (this_01,iVar5,0,*(undefined4 *)(iVar5 + 0xc),
                       (this_01->klass->vtable).Write.method);
            if (this_01 != (CryptoStream *)0x0) {
              mscorlib.dll::System::Security::Cryptography::CryptoStream::
              CryptoStream_FlushFinalBlock(this_01,(MethodInfo *)0x0);
              if (this_00 != (MemoryStream *)0x0) {
                inArray = (Byte__Array *)
                          (*(this_00->klass->vtable).ToArray.methodPtr)
                                    (this_00,(this_00->klass->vtable).ToArray.method);
                if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__System__Convert);
                }
                pSVar6 = mscorlib.dll::System::Convert::Convert_ToBase64String
                                   (inArray,(MethodInfo *)0x0);
                uStack_1._0_1_ = 3;
                if (this_01 != (CryptoStream *)0x0) {
                  func_?(0);
                }
                uStack_1 = CONCAT31(uStack_1._1_3_,1);
                if (this_00 != (MemoryStream *)0x0) {
                  func_?(0);
                }
                uStack_1 = 0xffffffff;
                if (transform != (ICryptoTransform *)0x0) {
                  func_?(0);
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
    }
  }
  uVar7 = func_?();
  uVar7 = func_?(uVar7);
  uVar7 = func_?(uVar7);
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
             (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)
                       (pEVar1,StringLiteral_P63oUa9unCY,(pEVar1->klass->vtable).GetBytes_1.method);
    TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT = pBVar2;
    func_?(TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields,pBVar2);
    pBVar2 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT;
    pRVar3 = (Rfc2898DeriveBytes *)
             func_?(TypeInfo__System__Security__Cryptography__Rfc2898DeriveBytes);
    if (pRVar3 != (Rfc2898DeriveBytes *)0x0) {
      mscorlib.dll::System::Security::Cryptography::Rfc2898DeriveBytes::Rfc2898DeriveBytes__ctor_1
                (pRVar3,StringLiteral_P63oUa9unCY,pBVar2,(MethodInfo *)0x0);
      TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator = pRVar3;
      func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->
                       keyGenerator);
      pRVar3 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
      if (pRVar3 != (Rfc2898DeriveBytes *)0x0) {
        pBVar2 = (Byte__Array *)(*(pRVar3->klass->vtable).GetBytes.methodPtr)(pRVar3,0x20);
        TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key = pBVar2;
        func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key,
                        pBVar2);
        pRVar3 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
        if (pRVar3 != (Rfc2898DeriveBytes *)0x0) {
          pBVar2 = (Byte__Array *)(*(pRVar3->klass->vtable).GetBytes.methodPtr)(pRVar3,0x10);
          TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv = pBVar2;
          func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv,
                          pBVar2);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

