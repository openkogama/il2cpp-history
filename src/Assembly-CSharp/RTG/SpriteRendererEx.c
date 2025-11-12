
/* AABB GetModelSpaceAABB(SpriteRenderer) */

AABB * Assembly-CSharp.dll::RTG::SpriteRendererEx::SpriteRendererEx_GetModelSpaceAABB
                 (AABB *__return_storage_ptr__,SpriteRenderer *spriteRenderer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (spriteRenderer == (SpriteRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pAVar2 = (AABB *)(*pcVar1)();
    return pAVar2;
  }
  this = UnityEngine.CoreModule.dll::UnityEngine::SpriteRenderer::SpriteRenderer_get_sprite
                   (spriteRenderer,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields)._.m_CachedPtr != (void *)0x0) {
      collection = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_vertices
                             (this,(MethodInfo *)0x0);
      this_00 = (List_1_UnityEngine_Vector2_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2___ctor_1
                (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)collection,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                );
      (__return_storage_ptr__->_size).x = 0.0;
      (__return_storage_ptr__->_size).y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
      (__return_storage_ptr__->_center).y = 0.0;
      (__return_storage_ptr__->_center).z = 0.0;
      *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
      AABB::AABB__ctor_3(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector2_ *)this_00,
                         (MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* Vector3 GetModelSpaceSize(SpriteRenderer) */

Vector3 * Assembly-CSharp.dll::RTG::SpriteRendererEx::SpriteRendererEx_GetModelSpaceSize
                    (Vector3 *__return_storage_ptr__,SpriteRenderer *spriteRenderer,
                    MethodInfo *method)

{
  pAVar1 = SpriteRendererEx_GetModelSpaceAABB(&AStack_2,spriteRenderer,(MethodInfo *)0x0);
  fVar3 = (pAVar1->_size).y;
  fVar4 = (pAVar1->_size).z;
  __return_storage_ptr__->x = (pAVar1->_size).x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 GetWorldCenterPoint(SpriteRenderer) */

Vector3 * Assembly-CSharp.dll::RTG::SpriteRendererEx::SpriteRendererEx_GetWorldCenterPoint
                    (Vector3 *__return_storage_ptr__,SpriteRenderer *spriteRenderer,
                    MethodInfo *method)

{
  if (spriteRenderer != (SpriteRenderer *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)spriteRenderer,(MethodInfo *)0x0);
    pAVar1 = SpriteRendererEx_GetModelSpaceAABB(&AStack_2,spriteRenderer,(MethodInfo *)0x0);
    uVar3 = (pAVar1->_center).y;
    uVar4 = (pAVar1->_center).z;
    uStack_5._0_4_ = (pAVar1->_size).x;
    uStack_5._4_4_ = (pAVar1->_size).y;
    uVar6 = *(undefined8 *)&(pAVar1->_size).z;
    uStack_7 = (undefined4)uVar6;
    uStack_8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_9 = uVar3;
    uStack_10 = uVar4;
    if (obj != (Transform *)0x0) {
      uStack_11 = CONCAT44(uVar3,uStack_8);
      uStack_12 = uVar4;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_13 = 0;
      fStack_14 = 0.0;
      pvVar15 = (obj->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        pVVar17 = (Vector3 *)(*pcVar16)();
        return pVVar17;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar16 = (code *)swi(3);
        pVVar17 = (Vector3 *)(*pcVar16)();
        return pVVar17;
      }
      pcRam_? = pcVar16;
      (*pcRam_?)(pvVar15,&uStack_11,&uStack_13);
      __return_storage_ptr__->x = (float)(undefined4)uStack_13;
      __return_storage_ptr__->y = (float)uStack_13._4_4_;
      __return_storage_ptr__->z = fStack_14;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  pVVar17 = (Vector3 *)(*pcVar16)();
  return pVVar17;
}


/* Boolean IsPixelFullyTransparent(SpriteRenderer, Vector3) */

bool Assembly-CSharp.dll::RTG::SpriteRendererEx::SpriteRendererEx_IsPixelFullyTransparent
               (SpriteRenderer *spriteRenderer,Vector3 *worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (spriteRenderer == (SpriteRenderer *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  this = UnityEngine.CoreModule.dll::UnityEngine::SpriteRenderer::SpriteRenderer_get_sprite
                   (spriteRenderer,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Sprite *)0x0) {
    return 1;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((this->fields)._.m_CachedPtr == (void *)0x0) {
    return 1;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      (this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 == (Texture2D *)0x0) {
    return 1;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((this_00->fields)._._.m_CachedPtr == (void *)0x0) {
    return 1;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)spriteRenderer,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) goto code_?;
  VStack_3.x = worldPos->x;
  VStack_3.y = worldPos->y;
  VStack_3.z = worldPos->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  fStack_5 = 0.0;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar6,&VStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar8->forwardVector).x;
  VStack_3.y = (pVVar8->forwardVector).y;
  fVar9 = (pVVar8->forwardVector).z;
  VStack_3.z = fVar9;
  AStack_10._size._0_8_ = VStack_3._0_8_;
  fVar11 = (float)FUN_?(&VStack_3);
  if (_UNK_? < fVar11) {
    VStack_3.x = AStack_10._size.x / fVar11;
    fVar9 = fVar9 / fVar11;
    VStack_3.y = AStack_10._size.y / fVar11;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_3.x = (pVVar8->zeroVector).x;
    VStack_3.y = (pVVar8->zeroVector).y;
    fVar9 = (pVVar8->zeroVector).z;
  }
  fVar12 = VStack_3.x;
  fVar13 = VStack_3.y;
  fVar11 = VStack_3.y * uStack_4._4_4_ + VStack_3.x * (float)uStack_4 + fVar9 * fStack_5
           + 0.0;
  fVar14 = uStack_4._4_4_ - fVar11 * VStack_3.y;
  fVar15 = (float)uStack_4 - fVar11 * VStack_3.x;
  fVar16 = fStack_5 - fVar11 * fVar9;
  pAVar17 = SpriteRendererEx_GetModelSpaceAABB(&AStack_10,spriteRenderer,(MethodInfo *)0x0);
  fVar18 = _UNK_?;
  fVar11 = (pAVar17->_size).x;
  fVar19 = (pAVar17->_size).y;
  aAStack_20[0]._center.x = (pAVar17->_center).x;
  aAStack_20[0]._center.y = (pAVar17->_center).y;
  aAStack_20[0]._center.z = (pAVar17->_center).z;
  aAStack_20[0]._isValid = pAVar17->_isValid;
  aAStack_20[0]._25_3_ = *(undefined3 *)&pAVar17->field_0x19;
  aAStack_20[0]._size.z = _UNK_?;
  AStack_10._size.y = fVar14;
  AStack_10._size.x = fVar15;
  AStack_10._size.z = fVar16;
  aAStack_20[0]._size.x = fVar11;
  aAStack_20[0]._size.y = fVar19;
  bVar2 = AABB::AABB_ContainsPoint(aAStack_20,&AStack_10._size,(MethodInfo *)0x0);
  fVar16 = _UNK_?;
  if (bVar2 == 0) {
    return 1;
  }
  fVar21 = aAStack_20[0]._center.y - fVar19 * _UNK_?;
  fVar22 = aAStack_20[0]._center.x - fVar11 * _UNK_?;
  fVar19 = (aAStack_20[0]._center.z - fVar18 * _UNK_?) * fVar9 +
           fVar22 * fVar12 + fVar21 * fVar13 + 0.0;
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_pixelsPerUnit
                     (this,(MethodInfo *)0x0);
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_pixelsPerUnit
                     (this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_8 = 0;
  pvVar6 = (this->fields)._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7);
code_?:
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
  }
  else {
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6,&uStackX_8);
    fVar11 = (fVar14 - (fVar21 - fVar19 * fVar13)) * fVar11 + uStackX_8._4_4_;
    fVar9 = (fVar15 - (fVar22 - fVar19 * fVar12)) * fVar9 + (float)uStackX_8;
    cVar23 = (*(this_00->klass->vtable).get_isReadable.methodPtr)(this_00);
    if (cVar23 != '\0') {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture2D>_UnityEngine__Texture2D_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      AStack_10._size.x = 0.0;
      AStack_10._size.y = 0.0;
      AStack_10._size.z = 0.0;
      AStack_10._center.x = 0.0;
      this = (this_00->fields)._._.m_CachedPtr;
      if (this != (Sprite *)0x0) {
        pcVar1 = pcRam_?;
        if ((pcRam_? != (code *)0x0) ||
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0)) {
          pcRam_? = pcVar1;
          (*pcRam_?)
                    (this,0,0,(int)(fVar9 + fVar16),(int)(fVar11 + fVar16),&AStack_10);
          return AStack_10._center.x <= _UNK_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  pUVar24 = UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_CreateNonReadableException
                      ((Texture *)this_00,(Texture *)this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__UnityEngine__Texture2D__GetPixel_int__int_);
  FUN_?(pUVar24);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

