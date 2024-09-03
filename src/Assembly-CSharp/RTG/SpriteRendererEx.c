
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
      AStack_1._size.x = (float)TypeInfo__UnityEngine__Object;
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pAVar3 = AABB::AABB_GetInvalid(&AStack_1,(MethodInfo *)0x0);
      fVar4 = (pAVar3->_size).y;
      fVar5 = (pAVar3->_size).z;
      fVar6 = (pAVar3->_center).x;
      (__return_storage_ptr__->_size).x = (pAVar3->_size).x;
      (__return_storage_ptr__->_size).y = fVar4;
      (__return_storage_ptr__->_size).z = fVar5;
      (__return_storage_ptr__->_center).x = fVar6;
      fVar4 = (pAVar3->_center).z;
      (__return_storage_ptr__->_center).y = (pAVar3->_center).y;
      (__return_storage_ptr__->_center).z = fVar4;
      uVar7 = *(undefined3 *)&pAVar3->field_0x19;
      __return_storage_ptr__->_isValid = pAVar3->_isValid;
      *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar7;
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
  pcVar8 = (code *)swi(3);
  pAVar3 = (AABB *)(*pcVar8)();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff6c;
  puVar5 = &stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  AStack_6._center.y = 0.0;
  AStack_6._center.z = 0.0;
  AStack_6._isValid = 0;
  AStack_6._25_3_ = 0;
  AStack_6._size.x = 0.0;
  AStack_6._size.y = 0.0;
  AStack_6._size.z = 0.0;
  AStack_6._center.x = 0.0;
  if (spriteRenderer != (SpriteRenderer *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::SpriteRenderer::SpriteRenderer_get_sprite
                     (spriteRenderer,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    if (this != (Sprite *)0x0) {
      pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)pTStack_8,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)spriteRenderer,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_InverseTransformPoint(&VStack_10,this_00,worldPos,(MethodInfo *)0x0);
        uVar11 = pVVar9->x;
        uVar12 = pVVar9->y;
        fStack_13 = pVVar9->z;
        fStack_14 = (float)uVar11;
        fStack_15 = (float)uVar12;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_10,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector
                             ,(MethodInfo *)0x0);
        CStack_16.r = pVVar9->x;
        CStack_16.g = pVVar9->y;
        CStack_16.b = pVVar9->z;
        fVar17 = CStack_16.b * fStack_13 + CStack_16.g * fStack_15 + CStack_16.r * fStack_14 + 0.0;
        fVar18 = fStack_15 - CStack_16.g * fVar17;
        fStack_19 = fStack_14 - CStack_16.r * fVar17;
        VStack_10.z = fStack_13 - CStack_16.b * fVar17;
        pAVar20 = SpriteRendererEx_GetModelSpaceAABB(&AStack_21,spriteRenderer,(MethodInfo *)0x0);
        fStack_13 = 1.0;
        AStack_6._size.x = (pAVar20->_size).x;
        AStack_6._size.y = (pAVar20->_size).y;
        AStack_6._center.y = (pAVar20->_center).y;
        AStack_6._center.z = (pAVar20->_center).z;
        AStack_6._isValid = pAVar20->_isValid;
        AStack_6._25_3_ = *(undefined3 *)&pAVar20->field_0x19;
        AStack_6._center.x = (float)((ulonglong)*(undefined8 *)&(pAVar20->_size).z >> 0x20);
        AStack_6._size.z = 1.0;
        point.y = fVar18;
        point.x = fStack_19;
        point.z = VStack_10.z;
        bVar7 = AABB::AABB_ContainsPoint(&AStack_6,point,(MethodInfo *)0x0);
        if (bVar7 == 0) goto code_?;
        pVVar9 = AABB::AABB_get_Min(&VStack_10,&AStack_6,(MethodInfo *)0x0);
        uVar22 = pVVar9->x;
        uVar23 = pVVar9->y;
        fStack_13 = pVVar9->z;
        fVar17 = CStack_16.b * fStack_13 + CStack_16.g * (float)uVar23 + CStack_16.r * (float)uVar22 +
                 0.0;
        uVar24 = pVVar9->x;
        uVar25 = pVVar9->y;
        fVar26 = CStack_16.g * fVar17;
        fStack_19 = fStack_19 - ((float)uVar24 - CStack_16.r * fVar17);
        fStack_14 = (float)uVar24;
        fStack_15 = (float)uVar25;
        fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_pixelsPerUnit
                              (this,(MethodInfo *)0x0);
        fStack_27 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_pixelsPerUnit
                              (this,(MethodInfo *)0x0);
        fVar17 = (fVar18 - ((float)uVar25 - fVar26)) * fStack_27;
        fStack_19 = fStack_19 * fStack_13;
        VVar28 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_textureRectOffset
                           (this,(MethodInfo *)0x0);
        fVar18 = fStack_19 + fStack_15;
        fStack_15 = VVar28.x;
        fStack_13 = VVar28.y;
        uStack_1 = 0;
        if (pTStack_8 != (Texture2D *)0x0) {
          pCVar29 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixel
                              (&CStack_16,pTStack_8,(int)(fVar18 + _UNK_?),
                               (int)(fVar17 + fStack_13 + _UNK_?),(MethodInfo *)0x0);
          bVar30 = pCVar29->a <= _UNK_?;
          *unaff_FS_OFFSET = uStack_3;
          return bVar30;
        }
      }
    }
  }
  func_?();
  pSStack_31 = spriteRenderer->klass;
  func_?(&pSStack_31,&UNK_?);
  pcVar32 = (code *)swi(3);
  bVar7 = (*pcVar32)();
  return bVar7;
}

