
/* String Decrypt(String) */

String * MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Decrypt
                   (String *inputText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Security__Cryptography__CryptoStream);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__MemoryStream);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Security__Cryptography__RijndaelManaged);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (RijndaelManaged *)FUN_?(TypeInfo__System__Security__Cryptography__RijndaelManaged)
  ;
  mscorlib.dll::System::Security::Cryptography::RijndaelManaged::RijndaelManaged__ctor
            (this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (inputText == (String *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar1);
    pSVar2 = (String *)func_?(&StringLiteral_s);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__System__Convert__FromBase64String_System__String_);
    FUN_?(this_02,uVar1);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    inputLength = (inputText->fields)._stringLength;
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    buffer = mscorlib.dll::System::Convert::Convert_FromBase64CharPtr
                       (&(inputText->fields)._firstChar,inputLength,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__Security__SecurityHelper);
    }
    if (this == (RijndaelManaged *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar3)();
      return pSVar2;
    }
    transform = (ICryptoTransform *)
                (*(this->klass->vtable).CreateDecryptor_1.methodPtr)
                          (this,TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->
                                key,TypeInfo__MV__WorldObject__Security__SecurityHelper->
                                    static_fields->iv);
    this_00 = (MemoryStream *)FUN_?(TypeInfo__System__IO__MemoryStream);
    mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor_3(this_00,buffer,1,(MethodInfo *)0x0)
    ;
    this_01 = (CryptoStream *)FUN_?(TypeInfo__System__Security__Cryptography__CryptoStream);
    mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream__ctor_1
              (this_01,(Stream *)this_00,transform,CryptoStreamMode__Enum_Read,0,(MethodInfo *)0x0);
    if (buffer == (Byte__Array *)0x0) goto code_?;
    lVar4 = FUN_?(TypeInfo__System__Byte,(int)buffer->max_length);
    if (lVar4 != 0) {
      if (this_01 != (CryptoStream *)0x0) {
        uVar5 = (*(this_01->klass->vtable).Read.methodPtr)
                          (this_01,lVar4,0,(ulonglong)*(uint *)(lVar4 + 0x18),
                           (this_01->klass->vtable).Read.method);
        pEVar6 = mscorlib.dll::System::Text::Encoding::Encoding_get_Unicode((MethodInfo *)0x0);
        if (pEVar6 != (Encoding *)0x0) {
          pSVar2 = (String *)
                   (*(pEVar6->klass->vtable).GetString_1.methodPtr)
                             (pEVar6,lVar4,0,(ulonglong)uVar5,
                              (pEVar6->klass->vtable).GetString_1.method);
          if (this_01 != (CryptoStream *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable);
          }
          if (this_00 != (MemoryStream *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable);
          }
          if (transform != (ICryptoTransform *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable);
          }
          return pSVar2;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String Encrypt(String) */

String * MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                   (String *inputText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Security__Cryptography__CryptoStream);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__MemoryStream);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Security__Cryptography__RijndaelManaged);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStackX_20 = (MemoryStream *)0x0;
  pCStackX_18 = (CryptoStream *)0x0;
  pSStack_1 = (String *)0x0;
  this = (RijndaelManaged *)FUN_?(TypeInfo__System__Security__Cryptography__RijndaelManaged)
  ;
  mscorlib.dll::System::Security::Cryptography::RijndaelManaged::RijndaelManaged__ctor
            (this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (this == (RijndaelManaged *)0x0) {
code_?:
    FUN_?();
code_?:
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_inArray);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&MethodInfo__System__Convert__ToBase64String_System__Byte____);
    FUN_?(this_02,uVar2);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    (*(this->klass->vtable).set_Key.methodPtr)
              (this,TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key,
               (this->klass->vtable).set_Key.method);
    (*(this->klass->vtable).set_IV.methodPtr)
              (this,TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv);
    pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_get_Unicode((MethodInfo *)0x0);
    if (pEVar4 == (Encoding *)0x0) goto code_?;
    lVar5 = (*(pEVar4->klass->vtable).GetBytes_1.methodPtr)
                      (pEVar4,inputText,(pEVar4->klass->vtable).GetBytes_1.method);
    pIStack_6 = (ICryptoTransform *)(*(this->klass->vtable).CreateEncryptor.methodPtr)(this);
    uStack_7 = 0;
    ppIStack_8 = &pIStack_6;
    this_00 = (MemoryStream *)FUN_?(TypeInfo__System__IO__MemoryStream);
    mscorlib.dll::System::IO::MemoryStream::MemoryStream__ctor(this_00,(MethodInfo *)0x0);
    transform = pIStack_6;
    uStack_9 = 0;
    ppMStack_10 = &pMStackX_20;
    pMStackX_20 = this_00;
    this_01 = (CryptoStream *)FUN_?(TypeInfo__System__Security__Cryptography__CryptoStream);
    mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream__ctor_1
              (this_01,(Stream *)this_00,transform,CryptoStreamMode__Enum_Write,0,(MethodInfo *)0x0)
    ;
    uStack_11 = 0;
    ppCStack_12 = &pCStackX_18;
    pCStackX_18 = this_01;
    if (lVar5 == 0) goto code_?;
    if (this_01 != (CryptoStream *)0x0) {
      (*(this_01->klass->vtable).Write.methodPtr)();
      if (pCStackX_18 != (CryptoStream *)0x0) {
        mscorlib.dll::System::Security::Cryptography::CryptoStream::CryptoStream_FlushFinalBlock
                  (pCStackX_18,(MethodInfo *)0x0);
        if (pMStackX_20 != (MemoryStream *)0x0) {
          lVar5 = (*(pMStackX_20->klass->vtable).ToArray.methodPtr)();
          if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Convert);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (lVar5 != 0) {
            RStack_13._pointer._value = (void *)(lVar5 + 0x20);
            RStack_13._12_4_ = 0;
            RStack_13._length = *(uint *)(lVar5 + 0x18);
            if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar3 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                               (&RStack_13,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
            pSStack_1 = pSVar3;
            if (pCStackX_18 != (CryptoStream *)0x0) {
              FUN_?(0,TypeInfo__System__IDisposable);
            }
            if (pMStackX_20 != (MemoryStream *)0x0) {
              FUN_?(0,TypeInfo__System__IDisposable);
            }
            if (pIStack_6 != (ICryptoTransform *)0x0) {
              FUN_?(0,TypeInfo__System__IDisposable);
            }
            return pSVar3;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar14)();
  return pSVar3;
}


/* SecurityHelper() */

void MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Security__Cryptography__Rfc2898DeriveBytes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
  if (pEVar1 != (Encoding *)0x0) {
    pBVar2 = (Byte__Array *)
             (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)
                       (pEVar1,StringLiteral_P63oUa9unCY,(pEVar1->klass->vtable).GetBytes_1.method);
    TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT = pBVar2;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields
                    >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pBVar2 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->SALT;
    pRVar8 = (Rfc2898DeriveBytes *)FUN_?();
    pSVar9 = StringLiteral_P63oUa9unCY;
    hashAlgorithm =
         mscorlib.dll::System::Security::Cryptography::HashAlgorithmName::HashAlgorithmName_get_SHA1
                   ((MethodInfo *)0x0);
    pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar1 != (Encoding *)0x0) {
      password = (Byte__Array *)
                 (*(pEVar1->klass->vtable).GetBytes_1.methodPtr)
                           (pEVar1,pSVar9,(pEVar1->klass->vtable).GetBytes_1.method);
      mscorlib.dll::System::Security::Cryptography::Rfc2898DeriveBytes::Rfc2898DeriveBytes__ctor
                (pRVar8,password,pBVar2,1000,hashAlgorithm,(MethodInfo *)0x0);
      TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator = pRVar8;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)
                       &TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->
                        keyGenerator >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pRVar8 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
      if (pRVar8 != (Rfc2898DeriveBytes *)0x0) {
        pBVar2 = (Byte__Array *)
                 (*(pRVar8->klass->vtable).GetBytes.methodPtr)
                           (pRVar8,0x20,(pRVar8->klass->vtable).GetBytes.method);
        TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key = pBVar2;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                         &TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->key >>
                        0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pRVar8 = TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->keyGenerator;
        if (pRVar8 != (Rfc2898DeriveBytes *)0x0) {
          pBVar2 = (Byte__Array *)
                   (*(pRVar8->klass->vtable).GetBytes.methodPtr)
                             (pRVar8,0x10,(pRVar8->klass->vtable).GetBytes.method);
          TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv = pBVar2;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)
                           &TypeInfo__MV__WorldObject__Security__SecurityHelper->static_fields->iv
                          >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

