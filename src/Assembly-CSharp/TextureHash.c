
/* Byte ColorFloatToByte(Single) */

uint8_t Assembly-CSharp.dll::TextureHash::TextureHash_ColorFloatToByte
                  (float colorFloat,MethodInfo *method)

{
  return (uint8_t)(int)(colorFloat * _UNK_?);
}


/* Byte[] ColorToByteArray(Color) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorToByteArray(Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,4);
  fVar2 = _UNK_?;
  aIStackX_18[0].m_value = 0;
  puVar3 = pBVar1->vector;
  while( true ) {
    if (aIStackX_18[0].m_value == 0) {
      fVar4 = color->r;
    }
    else if (aIStackX_18[0].m_value == 1) {
      fVar4 = color->g;
    }
    else if (aIStackX_18[0].m_value == 2) {
      fVar4 = color->b;
    }
    else {
      if (aIStackX_18[0].m_value != 3) {
        pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
        str2 = (String *)func_?(&::StringLiteral___);
        str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
        pSVar5 = mscorlib.dll::System::String::String_Concat_5(str0,pSVar5,str2,(MethodInfo *)0x0);
        uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar6);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,pSVar5,(MethodInfo *)0x0);
        uVar6 = func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
        FUN_?(this,uVar6);
        break;
      }
      fVar4 = color->a;
    }
    fVar4 = fVar4 * fVar2;
    if (pBVar1 == (Byte__Array *)0x0) {
      FUN_?(fVar4,fVar2,0);
      pcVar7 = (code *)swi(3);
      pBVar1 = (Byte__Array *)(*pcVar7)();
      return pBVar1;
    }
    if ((uint)pBVar1->max_length <= (uint)aIStackX_18[0].m_value) break;
    *puVar3 = (uint8_t)(int)fVar4;
    aIStackX_18[0].m_value = aIStackX_18[0].m_value + 1;
    puVar3 = puVar3 + 1;
    if (3 < aIStackX_18[0].m_value) {
      return pBVar1;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar7)();
  return pBVar1;
}


/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,sampleSize * sampleSize * 4);
  fVar2 = _UNK_?;
  uVar3 = 0;
  if (colors == (Color__Array *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pBVar1 = (Byte__Array *)(*pcVar4)();
    return pBVar1;
  }
  pCVar5 = colors->vector;
  iVar6 = 0;
  pBVar7 = pBVar1;
  while( true ) {
    if ((int)colors->max_length <= (int)uVar3) {
      return pBVar1;
    }
    if ((uint)colors->max_length <= uVar3) break;
    fVar8 = pCVar5->r;
    fVar9 = pCVar5->g;
    fVar10 = pCVar5->b;
    fVar11 = pCVar5->a;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Byte);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar12 = FUN_?(TypeInfo__System__Byte,4);
    puVar13 = (undefined1 *)(lVar12 + 0x20);
    uVar14 = 0;
    do {
      aIStackX_10[0].m_value = uVar14;
      fVar15 = fVar8;
      if ((((aIStackX_10[0].m_value != 0) && (fVar15 = fVar9, aIStackX_10[0].m_value != 1)) &&
          (fVar15 = fVar10, aIStackX_10[0].m_value != 2)) &&
         (fVar15 = fVar11, aIStackX_10[0].m_value != 3)) {
        pSVar16 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
        str2 = (String *)func_?(&::StringLiteral___);
        str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
        pSVar16 = mscorlib.dll::System::String::String_Concat_5(str0,pSVar16,str2,(MethodInfo *)0x0);
        uVar17 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar17);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,pSVar16,(MethodInfo *)0x0);
        uVar17 = func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
        FUN_?(this,uVar17);
        pcVar4 = (code *)swi(3);
        pBVar1 = (Byte__Array *)(*pcVar4)();
        return pBVar1;
      }
      if (lVar12 == 0) goto code_?;
      if (*(uint *)(lVar12 + 0x18) <= (uint)aIStackX_10[0].m_value) goto code_?;
      *puVar13 = (char)(int)(fVar15 * fVar2);
      puVar13 = puVar13 + 1;
      uVar14 = aIStackX_10[0].m_value + 1U;
    } while ((int)(aIStackX_10[0].m_value + 1U) < 4);
    uVar14 = 0;
    lVar18 = 0;
    do {
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto code_?;
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar1->max_length <= iVar6 + uVar14) goto code_?;
      uVar14 = uVar14 + 1;
      pBVar7->vector[lVar18] = *(uint8_t *)(lVar18 + 0x20 + lVar12);
      lVar18 = lVar18 + 1;
    } while (lVar18 < 4);
    uVar3 = uVar3 + 1;
    iVar6 = iVar6 + 4;
    pCVar5 = pCVar5 + 1;
    pBVar7 = (Byte__Array *)((longlong)&pBVar7->klass + 4);
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar4)();
  return pBVar1;
}


/* String CreateHashCode(Texture) */

String * Assembly-CSharp.dll::TextureHash::TextureHash_CreateHashCode
                   (Texture *texture,MethodInfo *method)

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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture2D>_UnityEngine__Texture2D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (pTVar3->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
code_?:
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar6 = (ArgumentNullException *)func_?(uVar5);
    pSVar2 = (String *)func_?(&StringLiteral_inArray);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar6,pSVar2,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Convert__ToBase64String_System__Byte____);
    FUN_?(pAVar6,uVar5);
code_?:
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar6 = (ArgumentNullException *)func_?(uVar5);
    pSVar2 = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar6,pSVar2,(MethodInfo *)0x0);
    func_?(&
                        MethodInfo__System__Security__Cryptography__HashAlgorithm__ComputeHash_System__Byte____
                       );
    FUN_?(pAVar6);
  }
  else {
    pcRam_? = pcVar1;
    colors = (Color__Array *)(*pcRam_?)(pvVar4,0,0,10,10,0);
    pBVar7 = TextureHash_ColorsToByteArray(colors,10,(MethodInfo *)0x0);
    this = (SHA1CryptoServiceProvider *)
           FUN_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
    SHA1CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
    uStack_8 = 0;
    ppSStack_9 = &pSStackX_8;
    pSStackX_8 = this;
    if (this == (SHA1CryptoServiceProvider *)0x0) goto code_?;
    if ((this->fields)._._._disposed == 0) {
      if (pBVar7 != (Byte__Array *)0x0) {
        (*(this->klass->vtable).HashCore.methodPtr)
                  (this,pBVar7,0,(ulonglong)(uint)pBVar7->max_length,
                   (this->klass->vtable).HashCore.method);
        pBVar7 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_CaptureHashCodeAndReinitialize
                           ((HashAlgorithm *)this,(MethodInfo *)0x0);
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
        if (pBVar7 != (Byte__Array *)0x0) {
          RStack_10._pointer._value = pBVar7->vector;
          RStack_10._12_4_ = 0;
          RStack_10._length = (uint)pBVar7->max_length;
          if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar2 = mscorlib.dll::System::Convert::Convert_ToBase64String_3
                             (&RStack_10,Base64FormattingOptions__Enum_None,(MethodInfo *)0x0);
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
  mscorlib.dll::System::ObjectDisposedException::ObjectDisposedException__ctor_1
            (this_00,(String *)0x0,(MethodInfo *)0x0);
  uVar5 = func_?(&
                              MethodInfo__System__Security__Cryptography__HashAlgorithm__ComputeHash_System__Byte____
                             );
  FUN_?(this_00,uVar5);
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}

