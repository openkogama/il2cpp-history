
/* Byte ColorFloatToByte(Single) */

uint8_t Assembly-CSharp.dll::TextureHash::TextureHash_ColorFloatToByte
                  (float colorFloat,MethodInfo *method)

{
  return (uint8_t)(int)(colorFloat * _UNK_?);
}


/* Byte[] ColorToByteArray(Color) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorToByteArray(Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,4);
  IStack_2.m_value = 0;
  while( true ) {
    switch(IStack_2.m_value) {
    case 0:
      fVar3 = color.r;
      break;
    case 1:
      fVar3 = color.g;
      break;
    case 2:
      fVar3 = color.b;
      break;
    case 3:
      fVar3 = color.a;
      break;
    default:
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
      str2 = (String *)func_?(&::StringLiteral___);
      str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar4,str2,(MethodInfo *)0x0);
      uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this = (IndexOutOfRangeException *)func_?(uVar5);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this,pSVar4,(MethodInfo *)0x0);
      func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
      func_?();
      goto code_?;
    }
    if (pBVar1 == (Byte__Array *)0x0) break;
    if (pBVar1->max_length <= (uint)IStack_2.m_value) {
code_?:
      func_?();
      break;
    }
    pBVar1->vector[IStack_2.m_value] = (uint8_t)(int)(fVar3 * _UNK_?);
    IStack_2.m_value = IStack_2.m_value + 1;
    if (3 < IStack_2.m_value) {
      return pBVar1;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar6)();
  return pBVar1;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?();
  uVar2 = 0;
  pCVar3 = colors;
  if (colors == (Color__Array *)0x0) {
code_?:
    func_?();
code_?:
    unaff_EDI = (IndexOutOfRangeException *)
                mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
    pBVar1 = (Byte__Array *)func_?();
    goto code_?;
  }
  while( true ) {
    if ((int)colors->max_length <= (int)uVar2) {
      return pBVar1;
    }
    uVar5 = uVar2 == colors->max_length;
    if (colors->max_length <= uVar2) break;
    fVar6 = pCVar3->vector[0].r;
    fVar7 = pCVar3->vector[0].g;
    fStack_8 = pCVar3->vector[0].b;
    fVar9 = pCVar3->vector[0].a;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    unaff_EDI = (IndexOutOfRangeException *)func_?();
    pIVar10 = (IndexOutOfRangeException *)0x0;
    do {
      IStack_4.m_value = (int32_t)pIVar10;
      switch(IStack_4.m_value) {
      case 0:
        fVar11 = fVar6;
        break;
      case 1:
        fVar11 = fVar7;
        break;
      case 2:
        fVar11 = fStack_8;
        break;
      case 3:
        fVar11 = fVar9;
        break;
      default:
        goto code_?;
      }
      if (unaff_EDI == (IndexOutOfRangeException *)0x0) goto code_?;
      pIVar10 = (IndexOutOfRangeException *)(unaff_EDI->fields)._._._message;
      uVar5 = (IndexOutOfRangeException *)IStack_4.m_value == pIVar10;
      if (pIVar10 <= (uint)IStack_4.m_value) goto code_?;
      *(char *)((int)&(((IndexOutOfRangeException *)IStack_4.m_value)->fields)._._._className +
               (int)&(unaff_EDI->fields)._._._className) = (char)(int)(fVar11 * _UNK_?);
      pIVar10 = (IndexOutOfRangeException *)
                ((int)&((IndexOutOfRangeException *)IStack_4.m_value)->klass + 1);
    } while ((int)pIVar10 < 4);
    pSVar12 = (String *)0x0;
    do {
      pSVar13 = (unaff_EDI->fields)._._._message;
      uVar5 = pSVar12 == pSVar13;
      if (pSVar13 <= pSVar12) goto code_?;
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
      uVar5 = &pSVar12->klass + uVar2 == (String__Class **)pBVar1->max_length;
      if ((undefined1 *)pBVar1->max_length <= &pSVar12->klass + uVar2) goto code_?;
      *(uint8_t *)((int)&pSVar12->klass + (int)(pBVar1->vector + uVar2 * 4)) =
           *(uint8_t *)((int)&(unaff_EDI->fields)._._._data + (int)pSVar12);
      pSVar12 = (String *)((int)&pSVar12->klass + 1);
    } while ((int)pSVar12 < 4);
    uVar2 = uVar2 + 1;
    pCVar3 = (Color__Array *)pCVar3->vector;
  }
code_?:
  while( true ) {
    uVar14 = func_?();
    if (!(bool)uVar5) {
      func_?();
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar15 = (byte)((ulonglong)uVar14 >> 0x20) & *(byte *)uVar14;
    if (-1 < (char)bVar15) break;
code_?:
    pSVar12 = (String *)func_?();
    pBVar1 = (Byte__Array *)
             mscorlib.dll::System::String::String_Concat_4
                       (pSVar12,(String *)unaff_EDI,(String *)pBVar1,(MethodInfo *)0x0);
    func_?();
    unaff_EDI = (IndexOutOfRangeException *)func_?();
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (unaff_EDI,(String *)pBVar1,(MethodInfo *)0x0);
    func_?();
    uVar5 = &stack0x00000000 == (undefined1 *)0x0;
    IStack_4.m_value = (int32_t)unaff_EDI;
    func_?();
  }
  in((short)CONCAT31((int3)((ulonglong)uVar14 >> 0x28),bVar15 & *(byte *)uVar14));
  *unaff_FS_OFFSET = (float)&stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  if (colors != (Color__Array *)0x0) {
    pCVar3 = (Color__Array *)0x0;
    if ((Texture2D__Class *)colors->klass == TypeInfo__UnityEngine__Texture2D) {
      pCVar3 = colors;
    }
    if (pCVar3 == (Color__Array *)0x0) {
      func_?(colors,TypeInfo__UnityEngine__Texture2D);
    }
    else {
      pCVar3 = (Color__Array *)0x0;
      if ((Texture2D__Class *)colors->klass == TypeInfo__UnityEngine__Texture2D) {
        pCVar3 = colors;
      }
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                         ((Texture2D *)pCVar3,0,0,10,10,(MethodInfo *)0x0);
      pBVar1 = TextureHash_ColorsToByteArray(pCVar3,10,(MethodInfo *)0x0);
      this = (SHA1CryptoServiceProvider *)
             func_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
      IStack_4.m_value = 1;
      if (this != (SHA1CryptoServiceProvider *)0x0) {
        pBVar1 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this,pBVar1,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar1 = (Byte__Array *)
                 mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar1,(MethodInfo *)0x0);
        IStack_4.m_value = -1;
        if (this == (SHA1CryptoServiceProvider *)0x0) {
          *unaff_FS_OFFSET = fStack_8;
          return pBVar1;
        }
        func_?();
        *unaff_FS_OFFSET = fStack_8;
        return pBVar1;
      }
    }
  }
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar17)();
  return pBVar1;
}


/* String CreateHashCode(Texture) */

String * Assembly-CSharp.dll::TextureHash::TextureHash_CreateHashCode
                   (Texture *texture,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  if (texture != (Texture *)0x0) {
    pTVar4 = (Texture *)0x0;
    if ((Texture2D__Class *)texture->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar4 = texture;
    }
    if (pTVar4 == (Texture *)0x0) {
      func_?(texture,TypeInfo__UnityEngine__Texture2D);
    }
    else {
      this = (Texture2D *)0x0;
      if ((Texture2D__Class *)texture->klass == TypeInfo__UnityEngine__Texture2D) {
        this = (Texture2D *)texture;
      }
      colors = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                         (this,0,0,10,10,(MethodInfo *)0x0);
      pBVar5 = TextureHash_ColorsToByteArray(colors,10,(MethodInfo *)0x0);
      this_00 = (SHA1CryptoServiceProvider *)
                func_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider)
      ;
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this_00,(MethodInfo *)0x0);
      uStack_1 = 1;
      if (this_00 != (SHA1CryptoServiceProvider *)0x0) {
        pBVar5 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this_00,pBVar5,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar6 = mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar5,(MethodInfo *)0x0);
        uStack_1 = 0xffffffff;
        if (this_00 != (SHA1CryptoServiceProvider *)0x0) {
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return pSVar6;
        }
        *unaff_FS_OFFSET = uStack_3;
        return pSVar6;
      }
    }
  }
  uVar7 = func_?();
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}

