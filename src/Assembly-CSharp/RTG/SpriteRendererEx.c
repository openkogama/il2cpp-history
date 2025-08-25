
/* AABB GetModelSpaceAABB(SpriteRenderer) */

AABB * Assembly-CSharp.dll::RTG::SpriteRendererEx::SpriteRendererEx_GetModelSpaceAABB
                 (AABB *__return_storage_ptr__,SpriteRenderer *spriteRenderer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (spriteRenderer != (SpriteRenderer *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::SpriteRenderer::SpriteRenderer_get_sprite
                     (spriteRenderer,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (__return_storage_ptr__->_size).x = 0.0;
      (__return_storage_ptr__->_size).y = 0.0;
      (__return_storage_ptr__->_size).z = 0.0;
      (__return_storage_ptr__->_center).x = 0.0;
      (__return_storage_ptr__->_center).y = 0.0;
      (__return_storage_ptr__->_center).z = 0.0;
      *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
      return __return_storage_ptr__;
    }
    if (this != (Sprite *)0x0) {
      collection = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_vertices
                             (this,(MethodInfo *)0x0);
      this_00 = (List_1_UnityEngine_Vector2_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2___ctor_1
                (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)collection,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                );
      (__return_storage_ptr__->_size).x = 0.0;
      (__return_storage_ptr__->_size).y = 0.0;
      (__return_storage_ptr__->_size).z = 0.0;
      (__return_storage_ptr__->_center).x = 0.0;
      (__return_storage_ptr__->_center).y = 0.0;
      (__return_storage_ptr__->_center).z = 0.0;
      *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
      AABB::AABB__ctor_3(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector2_ *)this_00,
                         (MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AABB *)(*pcVar2)();
  return pAVar3;
}


/* Vector3 GetModelSpaceSize(SpriteRenderer) */

Vector3 * Assembly-CSharp.dll::RTG::SpriteRendererEx::SpriteRendererEx_GetModelSpaceSize
                    (Vector3 *__return_storage_ptr__,SpriteRenderer *spriteRenderer,
                    MethodInfo *method)

{
  pAVar1 = SpriteRendererEx_GetModelSpaceAABB(aAStack_2,spriteRenderer,(MethodInfo *)0x0);
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
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)spriteRenderer,(MethodInfo *)0x0);
    pAVar1 = SpriteRendererEx_GetModelSpaceAABB
                       ((AABB *)&stack0xffffffb8,spriteRenderer,(MethodInfo *)0x0);
    uVar2 = (pAVar1->_center).z;
    uVar3 = (pAVar1->_center).x;
    uVar4 = (pAVar1->_center).y;
    position.y = (float)uVar4;
    position.x = (float)uVar3;
    if (this != (Transform *)0x0) {
      position.z = (float)uVar2;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         (&VStack_6,this,position,(MethodInfo *)0x0);
      fVar7 = pVVar5->y;
      fVar8 = pVVar5->z;
      __return_storage_ptr__->x = pVVar5->x;
      __return_storage_ptr__->y = fVar7;
      __return_storage_ptr__->z = fVar8;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar9)();
  return pVVar5;
}


/* Boolean IsPixelFullyTransparent(SpriteRenderer, Vector3) */

bool Assembly-CSharp.dll::RTG::SpriteRendererEx::SpriteRendererEx_IsPixelFullyTransparent
               (SpriteRenderer *spriteRenderer,Vector3 worldPos,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff30;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff30;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  if (spriteRenderer != (SpriteRenderer *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::SpriteRenderer::SpriteRenderer_get_sprite
                     (spriteRenderer,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_4;
      return 1;
    }
    if (this != (Sprite *)0x0) {
      pTStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTStack_9,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar8 != 0) goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)spriteRenderer,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                           (&VStack_11,this_00,worldPos,(MethodInfo *)0x0);
        uVar12 = pVVar10->x;
        uVar13 = pVVar10->y;
        fStack_14 = pVVar10->z;
        fStack_15 = (float)uVar12;
        fStack_16 = (float)uVar13;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                           (&VStack_11,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                            (MethodInfo *)0x0);
        uStack_17._0_4_ = pVVar10->x;
        uStack_17._4_4_ = pVVar10->y;
        fStack_18 = pVVar10->z;
        fVar19 = uStack_17._4_4_ * fStack_16 + (float)uStack_17 * fStack_15 + fStack_18 * fStack_14
                 + 0.0;
        fStack_20 = fStack_16 - uStack_17._4_4_ * fVar19;
        fStack_21 = fStack_15 - (float)uStack_17 * fVar19;
        VStack_11.z = fStack_14 - fStack_18 * fVar19;
        pAVar22 = SpriteRendererEx_GetModelSpaceAABB(&AStack_23,spriteRenderer,(MethodInfo *)0x0);
        fStack_14 = 1.0;
        CStack_24.r = (pAVar22->_size).x;
        AStack_23._size.x = (pAVar22->_size).y;
        CStack_24.b = (pAVar22->_size).z;
        CStack_24.a = (pAVar22->_center).x;
        AStack_25._center.y = (pAVar22->_center).y;
        AStack_25._center.z = (pAVar22->_center).z;
        AStack_25._isValid = pAVar22->_isValid;
        AStack_25._25_3_ = *(undefined3 *)&pAVar22->field_0x19;
        AStack_25._size.z = 1.0;
        point.y = fStack_20;
        point.x = fStack_21;
        point.z = VStack_11.z;
        AStack_23._size.y = AStack_23._size.x;
        AStack_23._size.z = AStack_23._size.x;
        AStack_23._center.x = AStack_23._size.x;
        CStack_24.g = AStack_23._size.x;
        AStack_25._size.x = CStack_24.r;
        AStack_25._size.y = AStack_23._size.x;
        AStack_25._center.x = CStack_24.a;
        bVar8 = AABB::AABB_ContainsPoint(&AStack_25,point,(MethodInfo *)0x0);
        if (bVar8 == 0) goto code_?;
        fVar26 = AStack_25._center.y - AStack_23._size.x * _UNK_?;
        fVar27 = AStack_25._center.x - CStack_24.r * _UNK_?;
        fVar19 = uStack_17._4_4_ * fVar26 + fVar27 * (float)uStack_17 +
                 fStack_18 * (AStack_25._center.z - _UNK_?) + 0.0;
        fStack_20 = fStack_20 - (fVar26 - uStack_17._4_4_ * fVar19);
        fStack_21 = fStack_21 - (fVar27 - (float)uStack_17 * fVar19);
        fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_pixelsPerUnit
                              (this,(MethodInfo *)0x0);
        fStack_28 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_pixelsPerUnit
                              (this,(MethodInfo *)0x0);
        fStack_20 = fStack_20 * fStack_28;
        fStack_21 = fStack_21 * fStack_14;
        VVar29 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_textureRectOffset
                           (this,(MethodInfo *)0x0);
        fVar19 = fStack_21 + fStack_16;
        fStack_16 = VVar29.x;
        fStack_14 = VVar29.y;
        uStack_2 = 0;
        if (pTStack_9 != (Texture2D *)0x0) {
          pCVar30 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixel
                              (&CStack_24,pTStack_9,(int)(fVar19 + _UNK_?),
                               (int)(fStack_20 + fStack_14 + _UNK_?),(MethodInfo *)0x0);
          bVar31 = pCVar30->a <= _UNK_?;
          *unaff_FS_OFFSET = uStack_4;
          return bVar31;
        }
      }
    }
  }
  func_?();
  pSStack_32 = spriteRenderer->klass;
  func_?(&pSStack_32,&UNK_?);
  pcVar33 = (code *)swi(3);
  bVar8 = (*pcVar33)();
  return bVar8;
}

