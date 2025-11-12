
/* Byte ColorFloatToByte(Single) */

uint8_t Assembly-CSharp.dll::TextureHash::TextureHash_ColorFloatToByte(float colorFloat,MethodInfo *method)

{
  return (uint8_t)(int)(colorFloat * 255.0);
}


/* Byte[] ColorToByteArray(Color) */

Byte__Array * Assembly-CSharp.dll::TextureHash::TextureHash_ColorToByteArray(Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  aIStackX_18[0].m_value = 0;
  puVar2 = pBVar1->vector;
  while( true ) {
    if (aIStackX_18[0].m_value == 0) {
      fVar3 = color->r;
    }
    else if (aIStackX_18[0].m_value == 1) {
      fVar3 = color->g;
    }
    else if (aIStackX_18[0].m_value == 2) {
      fVar3 = color->b;
    }
    else {
      if (aIStackX_18[0].m_value != 3) {
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
        str2 = (String *)func_?(&::StringLiteral___);
        str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
        pSVar4 = mscorlib.dll::System::String::String_Concat_5(str0,pSVar4,str2,(MethodInfo *)0x0);
        uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar5);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(this,pSVar4,(MethodInfo *)0x0);
        uVar5 = func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
        FUN_?(this,uVar5);
        break;
      }
      fVar3 = color->a;
    }
    if (pBVar1 == (Byte__Array *)0x0) {
      FUN_?(fVar3 * 255.0,0x437f0000,0);
      pcVar6 = (code *)swi(3);
      pBVar1 = (Byte__Array *)(*pcVar6)();
      return pBVar1;
    }
    if ((uint)pBVar1->max_length <= (uint)aIStackX_18[0].m_value) break;
    *puVar2 = (uint8_t)(int)(fVar3 * 255.0);
    aIStackX_18[0].m_value = aIStackX_18[0].m_value + 1;
    puVar2 = puVar2 + 1;
    if (3 < aIStackX_18[0].m_value) {
      return pBVar1;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar6)();
  return pBVar1;
}


/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array * Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray(Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,sampleSize * sampleSize * 4);
  uVar2 = 0;
  if (colors == (Color__Array *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pBVar1 = (Byte__Array *)(*pcVar3)();
    return pBVar1;
  }
  pCVar4 = colors->vector;
  iVar5 = 0;
  pBVar6 = pBVar1;
  while( true ) {
    if ((int)colors->max_length <= (int)uVar2) {
      return pBVar1;
    }
    if ((uint)colors->max_length <= uVar2) break;
    fVar7 = pCVar4->r;
    fVar8 = pCVar4->g;
    fVar9 = pCVar4->b;
    fVar10 = pCVar4->a;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Byte);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar11 = FUN_?(TypeInfo__System__Byte,4);
    puVar12 = (undefined1 *)(lVar11 + 0x20);
    uVar13 = 0;
    do {
      aIStackX_10[0].m_value = uVar13;
      fVar14 = fVar7;
      if ((((aIStackX_10[0].m_value != 0) && (fVar14 = fVar8, aIStackX_10[0].m_value != 1)) && (fVar14 = fVar9, aIStackX_10[0].m_value != 2)) && (fVar14 = fVar10, aIStackX_10[0].m_value != 3)) {
        pSVar15 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
        str2 = (String *)func_?(&::StringLiteral___);
        str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
        pSVar15 = mscorlib.dll::System::String::String_Concat_5(str0,pSVar15,str2,(MethodInfo *)0x0);
        uVar16 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar16);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(this,pSVar15,(MethodInfo *)0x0);
        uVar16 = func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
        FUN_?(this,uVar16);
        pcVar3 = (code *)swi(3);
        pBVar1 = (Byte__Array *)(*pcVar3)();
        return pBVar1;
      }
      if (lVar11 == 0) goto code_?;
      if (*(uint *)(lVar11 + 0x18) <= (uint)aIStackX_10[0].m_value) goto code_?;
      *puVar12 = (char)(int)(fVar14 * 255.0);
      puVar12 = puVar12 + 1;
      uVar13 = aIStackX_10[0].m_value + 1U;
    } while ((int)(aIStackX_10[0].m_value + 1U) < 4);
    uVar13 = 0;
    lVar17 = 0;
    do {
      if (*(uint *)(lVar11 + 0x18) <= uVar13) goto code_?;
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar1->max_length <= iVar5 + uVar13) goto code_?;
      uVar13 = uVar13 + 1;
      pBVar6->vector[lVar17] = *(uint8_t *)(lVar17 + 0x20 + lVar11);
      lVar17 = lVar17 + 1;
    } while (lVar17 < 4);
    uVar2 = uVar2 + 1;
    iVar5 = iVar5 + 4;
    pCVar4 = pCVar4 + 1;
    pBVar6 = (Byte__Array *)((longlong)&pBVar6->klass + 4);
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar3)();
  return pBVar1;
}


/* String CreateHashCode(Texture) */

String * Assembly-CSharp.dll::TextureHash::TextureHash_CreateHashCode(Texture *texture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (texture == (Texture *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pTVar3 = (Texture *)0x0;
  if ((Texture2D__Class *)texture->klass == TypeInfo__UnityEngine__Texture2D) {
    pTVar3 = texture;
  }
  if (pTVar3 == (Texture *)0x0) {
    FUN_?(texture);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pTVar3 = (Texture *)0x0;
  if ((Texture2D__Class *)texture->klass == TypeInfo__UnityEngine__Texture2D) {
    pTVar3 = texture;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture2D>_UnityEngine__Texture2D_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (pTVar3->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
code_?:
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar6 = (ArgumentNullException *)func_?(uVar5);
    pSVar2 = (String *)func_?(&StringLiteral_inArray);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar6,pSVar2,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Convert__ToBase64String_System__Byte____);
    FUN_?(pAVar6,uVar5);
code_?:
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar6 = (ArgumentNullException *)func_?(uVar5);
    pSVar2 = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(pAVar6,pSVar2,(MethodInfo *)0x0);
    func_?(&MethodInfo__System__Security__Cryptography__HashAlgorithm__ComputeHash_System__Byte____);
    FUN_?(pAVar6);
  }
  else {
    pcRam_? = pcVar1;
    colors = (Color__Array *)(*pcRam_?)(pvVar4,0,0,10,10,0);
    pBVar7 = TextureHash_ColorsToByteArray(colors,10,(MethodInfo *)0x0);
    this = (SHA1CryptoServiceProvider *)FUN_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::SHA1CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
    uStack_8 = 0;
    ppSStack_9 = &pSStackX_8;
    pSStackX_8 = this;
    if (this == (SHA1CryptoServiceProvider *)0x0) goto code_?;
    if ((this->fields)._._._disposed == 0) {
      if (pBVar7 != (Byte__Array *)0x0) {
        (*(this->klass->vtable).HashCore.methodPtr)(this,pBVar7,0,(ulonglong)(uint)pBVar7->max_length,(this->klass->vtable).HashCore.method);
        pBVar7 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::HashAlgorithm_CaptureHashCodeAndReinitialize((HashAlgorithm *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Convert);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<unsigned_char>__ReadOnlySpan_System__Byte____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pBVar7 != (Byte__Array *)0x0) {
          RStack_10._pointer._value = pBVar7->vector;
          RStack_10._12_4_ = 0;
          RStack_10._length = (uint)pBVar7->max_length;
          if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3(&RStack_10,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
          if (pSStackX_8 != (SHA1CryptoServiceProvider *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable);
          }
          return pSVar2;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(&TypeInfo__System__ObjectDisposedException);
  this_00 = (ObjectDisposedException *)func_?(uVar5);
  mscorlib.dll::System::ObjectDisposedException::ObjectDisposedException__ctor_1(this_00,(String *)0x0,(MethodInfo *)0x0);
  uVar5 = func_?(&MethodInfo__System__Security__Cryptography__HashAlgorithm__ComputeHash_System__Byte____);
  FUN_?(this_00,uVar5);
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}

