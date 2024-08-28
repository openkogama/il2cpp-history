
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


/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,sampleSize * sampleSize * 4);
  uVar2 = 0;
  pCVar3 = colors;
  if (colors == (Color__Array *)0x0) {
code_?:
    func_?();
code_?:
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
    str2 = (String *)func_?(&::StringLiteral___);
    str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
    pSVar4 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar4,str2,(MethodInfo *)0x0);
    uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar7 = (IndexOutOfRangeException *)func_?(uVar6);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar7,pSVar4,(MethodInfo *)0x0);
    func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
    IStack_5.m_value = (int32_t)pIVar7;
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar2) {
        return pBVar1;
      }
      if (colors->max_length <= uVar2) break;
      fVar8 = pCVar3->vector[0].r;
      fVar9 = pCVar3->vector[0].g;
      fVar10 = pCVar3->vector[0].b;
      fVar11 = pCVar3->vector[0].a;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Byte);
        cRam_? = '\x01';
      }
      iVar12 = func_?(TypeInfo__System__Byte,4);
      pIVar7 = (IndexOutOfRangeException *)0x0;
      do {
        IStack_5.m_value = (int32_t)pIVar7;
        switch(IStack_5.m_value) {
        case 0:
          fVar13 = fVar8;
          break;
        case 1:
          fVar13 = fVar9;
          break;
        case 2:
          fVar13 = fVar10;
          break;
        case 3:
          fVar13 = fVar11;
          break;
        default:
          goto code_?;
        }
        if (iVar12 == 0) goto code_?;
        if (*(IndexOutOfRangeException **)(iVar12 + 0xc) <= (uint)IStack_5.m_value)
        goto code_?;
        *(char *)((int)&(((IndexOutOfRangeException *)IStack_5.m_value)->fields)._._._data + iVar12)
             = (char)(int)(fVar13 * _UNK_?);
        pIVar7 = (IndexOutOfRangeException *)
                  ((int)&((IndexOutOfRangeException *)IStack_5.m_value)->klass + 1);
      } while ((int)pIVar7 < 4);
      uVar14 = 0;
      do {
        if (*(uint *)(iVar12 + 0xc) <= uVar14) goto code_?;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        uVar15 = uVar14 + uVar2 * 4;
        if (pBVar1->max_length <= uVar15) goto code_?;
        puVar16 = (uint8_t *)(iVar12 + 0x10 + uVar14);
        uVar14 = uVar14 + 1;
        pBVar1->vector[uVar15] = *puVar16;
      } while ((int)uVar14 < 4);
      uVar2 = uVar2 + 1;
      pCVar3 = (Color__Array *)pCVar3->vector;
    }
  }
code_?:
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

