
/* Void OnDestroy() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnDestroy
               (RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (RoundedRectangle *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  BVar2._._.m_CachedPtr = (this->fields)._._._._._._._;
  if (BVar2._._.m_CachedPtr == (Object_1__Fields)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(BVar2._._.m_CachedPtr);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__CanvasUpdateRegistry);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__GraphicRegistry);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  c = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_canvas
                ((Graphic *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__UI__GraphicRegistry->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::UI::GraphicRegistry::GraphicRegistry_UnregisterGraphicForCanvas
            (c,(Graphic *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__UI__CanvasUpdateRegistry->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::UI::CanvasUpdateRegistry::
  CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild((ICanvasElement *)this,(MethodInfo *)0x0);
  pMVar4 = (this->fields)._._._.m_CachedMesh;
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
  if (pMVar4 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar4->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar4 = (this->fields)._._._.m_CachedMesh;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pMVar4,0.0,(MethodInfo *)0x0);
    }
  }
  bVar5 = iRam_? != 0;
  (this->fields)._._._.m_CachedMesh = (Mesh *)0x0;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields)._._._.m_CachedMesh >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void OnPopulateMesh(VertexHelper) */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnPopulateMesh
               (RoundedRectangle *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (vh != (VertexHelper *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    pRVar1 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect
                        (&RStack_2,(Graphic *)this,(MethodInfo *)0x0);
    fVar3 = pRVar1->m_XMin;
    fVar4 = pRVar1->m_YMin;
    uVar5._0_4_ = pRVar1->m_XMin;
    uVar5._4_4_ = pRVar1->m_YMin;
    fVar6 = pRVar1->m_Width;
    fVar7 = pRVar1->m_Height;
    uVar8._0_4_ = pRVar1->m_Width;
    uVar8._4_4_ = pRVar1->m_Height;
    uVar9._0_4_ = pRVar1->m_Width;
    uVar9._4_4_ = pRVar1->m_Height;
    uVar10._0_4_ = pRVar1->m_Width;
    uVar10._4_4_ = pRVar1->m_Height;
    uVar11._0_4_ = pRVar1->m_Width;
    uVar11._4_4_ = pRVar1->m_Height;
    fVar12 = fVar6 + fVar3;
    fVar13 = fVar7 + fVar4;
    lVar14 = FUN_?(TypeInfo__System__Single,3);
    fVar15 = _UNK_?;
    if (lVar14 != 0) {
      if ((*(int *)(lVar14 + 0x18) != 0) &&
         (*(float *)(lVar14 + 0x20) = fVar6 * _UNK_?, 1 < *(uint *)(lVar14 + 0x18))) {
        *(float *)(lVar14 + 0x24) = fVar7 * fVar15;
        if (2 < *(uint *)(lVar14 + 0x18)) {
          *(float *)(lVar14 + 0x28) = (this->fields).radius;
          iVar16 = *(int *)(lVar14 + 0x18);
          if (iVar16 == 0) {
            fVar6 = 0.0;
          }
          else {
            if (*(int *)(lVar14 + 0x18) == 0) goto DAT_?;
            fVar6 = *(float *)(lVar14 + 0x20);
            uVar17 = 1;
            if (1 < iVar16) {
              lVar18 = 1;
              pfVar19 = (float *)(lVar14 + 0x24);
              do {
                if (*(uint *)(lVar14 + 0x18) <= uVar17) goto DAT_?;
                if (*pfVar19 <= fVar6 && fVar6 != *pfVar19) {
                  fVar6 = *pfVar19;
                }
                uVar17 = uVar17 + 1;
                lVar18 = lVar18 + 1;
                pfVar19 = pfVar19 + 1;
              } while (lVar18 < iVar16);
            }
          }
          fVar7 = (this->fields)._.m_FillAmount;
          fVar15 = (this->fields).borderThickness;
          fVar20 = (float)(this->fields)._.m_FillOrigin;
          fVar21 = (float)(this->fields)._.m_FillMethod;
          fStack_22 = (this->fields).borderColor.r;
          fStack_23 = (this->fields).borderColor.g;
          fStack_24 = (this->fields).borderColor.b;
          fStack_25 = (this->fields).borderColor.a;
          fStack_26 = fVar21;
          puVar27 = (undefined8 *)
                    (*(this->klass->vtable).get_color.methodPtr)
                              (&RStack_2,this,(this->klass->vtable).get_color.method);
          VStack_28._0_8_ = *puVar27;
          VStack_28._8_8_ = puVar27[1];
          uVar17 = FUN_?(&VStack_28);
          fVar29 = _UNK_?;
          VStack_30.y = fVar7;
          VStack_30.x = fVar21;
          VStack_31._0_8_ = ZEXT48((uint)_UNK_?);
          VStack_32.w = fStack_25;
          VStack_28.w = fVar15;
          VStack_28.z = fVar6;
          VStack_32.y = fStack_23;
          VStack_32.x = fStack_22;
          VStack_32.z = fStack_24;
          VStack_30.w = 0.0;
          VStack_30.z = fVar20;
          VStack_28._0_8_ = uVar11;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_31.z = 0.0;
          pVVar33 = TypeInfo__UnityEngine__Vector4->static_fields;
          color.r = 0;
          color.g = 0;
          color.b = 0;
          color.a = 0;
          color.rgba = uVar17;
          VStack_34.x = (pVVar33->zeroVector).x;
          VStack_34.y = (pVVar33->zeroVector).y;
          VStack_34.z = (pVVar33->zeroVector).z;
          VStack_34.w = (pVVar33->zeroVector).w;
          aVStack_35[0].w = VStack_32.w;
          aVStack_35[0].z = VStack_32.z;
          RStack_2.m_XMin = 0.0;
          RStack_2.m_YMin = 0.0;
          RStack_2.m_Width = 0.0;
          RStack_2.m_Height = 0.0;
          aVStack_35[0].x = VStack_32.x;
          aVStack_35[0].y = VStack_32.y;
          VStack_32.z = 0.0;
          VStack_32._0_8_ = uVar5;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (vh,(Vector3 *)&VStack_32,color,(Vector4 *)&RStack_2,&VStack_28,&VStack_30,
                     aVStack_35,(Vector3 *)&VStack_31,&VStack_34,(MethodInfo *)0x0);
          puVar27 = (undefined8 *)
                    (*(this->klass->vtable).get_color.methodPtr)
                              (&RStack_2,this,(this->klass->vtable).get_color.method);
          RStack_2._0_8_ = *puVar27;
          RStack_2._8_8_ = puVar27[1];
          uVar17 = FUN_?(&RStack_2);
          VStack_30.x = fStack_26;
          VStack_28.y = fStack_23;
          VStack_28.x = fStack_22;
          VStack_28.w = fStack_25;
          VStack_28.z = fStack_24;
          VStack_30.w = 0.0;
          VStack_31._0_8_ = uVar10;
          VStack_31.z = fVar6;
          VStack_31.w = fVar15;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_32.z = 0.0;
          color_00.r = 0;
          color_00.g = 0;
          color_00.b = 0;
          color_00.a = 0;
          color_00.rgba = uVar17;
          pVVar33 = TypeInfo__UnityEngine__Vector4->static_fields;
          RStack_2.m_XMin = (pVVar33->zeroVector).x;
          RStack_2.m_YMin = (pVVar33->zeroVector).y;
          RStack_2.m_Width = (pVVar33->zeroVector).z;
          RStack_2.m_Height = (pVVar33->zeroVector).w;
          VStack_32._0_8_ = (ulonglong)(uint)fVar29 << 0x20;
          VStack_34.x = VStack_30.x;
          VStack_34.y = VStack_30.y;
          VStack_34.z = VStack_30.z;
          VStack_34.w = VStack_30.w;
          aVStack_35[0].x = VStack_28.x;
          aVStack_35[0].y = VStack_28.y;
          aVStack_35[0].z = VStack_28.z;
          aVStack_35[0].w = VStack_28.w;
          VStack_28.w = VStack_31.w;
          VStack_28.z = VStack_31.z;
          VStack_28.x = VStack_31.x;
          VStack_28.y = VStack_31.y;
          VStack_30.x = _UNK_?;
          VStack_30.y = _UNK_?;
          VStack_30.z = _UNK_?;
          VStack_30.w = _UNK_?;
          VStack_31.z = 0.0;
          VStack_31.y = fVar13;
          VStack_31.x = fVar3;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (vh,(Vector3 *)&VStack_31,color_00,&VStack_30,&VStack_28,&VStack_34,
                     aVStack_35,(Vector3 *)&VStack_32,(Vector4 *)&RStack_2,(MethodInfo *)0x0);
          puVar27 = (undefined8 *)
                    (*(this->klass->vtable).get_color.methodPtr)
                              (&RStack_2,this,(this->klass->vtable).get_color.method);
          RStack_2._0_8_ = *puVar27;
          RStack_2._8_8_ = puVar27[1];
          uVar17 = FUN_?(&RStack_2);
          fVar3 = fStack_26;
          VStack_28.y = fStack_23;
          VStack_28.x = fStack_22;
          VStack_28.w = fStack_25;
          VStack_28.z = fStack_24;
          VStack_30.y = fVar7;
          VStack_30.x = fStack_26;
          VStack_30.w = 0.0;
          VStack_30.z = fVar20;
          VStack_31._0_8_ = uVar9;
          VStack_31.z = fVar6;
          VStack_31.w = fVar15;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_32.z = fVar29;
          color_01.r = 0;
          color_01.g = 0;
          color_01.b = 0;
          color_01.a = 0;
          color_01.rgba = uVar17;
          pVVar33 = TypeInfo__UnityEngine__Vector4->static_fields;
          RStack_2.m_XMin = (pVVar33->zeroVector).x;
          RStack_2.m_YMin = (pVVar33->zeroVector).y;
          RStack_2.m_Width = (pVVar33->zeroVector).z;
          RStack_2.m_Height = (pVVar33->zeroVector).w;
          VStack_32._0_8_ = (ulonglong)(uint)fVar29 << 0x20;
          VStack_34.x = VStack_30.x;
          VStack_34.y = VStack_30.y;
          VStack_34.z = VStack_30.z;
          VStack_34.w = VStack_30.w;
          aVStack_35[0].x = VStack_28.x;
          aVStack_35[0].y = VStack_28.y;
          aVStack_35[0].z = VStack_28.z;
          aVStack_35[0].w = VStack_28.w;
          VStack_28.w = VStack_31.w;
          VStack_28.z = VStack_31.z;
          VStack_28.x = VStack_31.x;
          VStack_28.y = VStack_31.y;
          VStack_30.x = _UNK_?;
          VStack_30.y = _UNK_?;
          VStack_30.z = _UNK_?;
          VStack_30.w = _UNK_?;
          VStack_31.z = 0.0;
          VStack_31.y = fVar13;
          VStack_31.x = fVar12;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (vh,(Vector3 *)&VStack_31,color_01,&VStack_30,&VStack_28,&VStack_34,
                     aVStack_35,(Vector3 *)&VStack_32,(Vector4 *)&RStack_2,(MethodInfo *)0x0);
          puVar27 = (undefined8 *)
                    (*(this->klass->vtable).get_color.methodPtr)
                              (&RStack_2,this,(this->klass->vtable).get_color.method);
          RStack_2._0_8_ = *puVar27;
          RStack_2._8_8_ = puVar27[1];
          uVar17 = FUN_?(&RStack_2);
          uVar5 = _UNK_?;
          uVar11 = _UNK_?;
          VStack_28.y = fStack_23;
          VStack_28.x = fStack_22;
          VStack_28.w = fStack_25;
          VStack_28.z = fStack_24;
          VStack_30.y = fVar7;
          VStack_30.x = fVar3;
          VStack_30.w = 0.0;
          VStack_30.z = fVar20;
          VStack_31._0_8_ = uVar8;
          VStack_31.z = fVar6;
          VStack_31.w = fVar15;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uVar9 = _UNK_?;
          uVar10 = _UNK_?;
          VStack_32.z = fVar29;
          color_02.r = 0;
          color_02.g = 0;
          color_02.b = 0;
          color_02.a = 0;
          color_02.rgba = uVar17;
          pVVar33 = TypeInfo__UnityEngine__Vector4->static_fields;
          RStack_2.m_XMin = (pVVar33->zeroVector).x;
          RStack_2.m_YMin = (pVVar33->zeroVector).y;
          RStack_2.m_Width = (pVVar33->zeroVector).z;
          RStack_2.m_Height = (pVVar33->zeroVector).w;
          VStack_32.x = 0.0;
          VStack_32.y = 0.0;
          VStack_34.x = VStack_30.x;
          VStack_34.y = VStack_30.y;
          VStack_34.z = VStack_30.z;
          VStack_34.w = VStack_30.w;
          aVStack_35[0].x = VStack_28.x;
          aVStack_35[0].y = VStack_28.y;
          aVStack_35[0].z = VStack_28.z;
          aVStack_35[0].w = VStack_28.w;
          VStack_28.w = VStack_31.w;
          VStack_28.z = VStack_31.z;
          VStack_28.x = VStack_31.x;
          VStack_28.y = VStack_31.y;
          VStack_31.z = 0.0;
          _UNK_? = (float)uVar11;
          _UNK_? = SUB84(uVar11,4);
          VStack_30.x = _UNK_?;
          VStack_30.y = _UNK_?;
          _UNK_? = (float)uVar5;
          _UNK_? = SUB84(uVar5,4);
          VStack_30.z = _UNK_?;
          VStack_30.w = _UNK_?;
          VStack_31.y = fVar4;
          VStack_31.x = fVar12;
          _UNK_? = uVar10;
          _UNK_? = uVar9;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert
                    (vh,(Vector3 *)&VStack_31,color_02,&VStack_30,&VStack_28,&VStack_34,
                     aVStack_35,(Vector3 *)&VStack_32,(Vector4 *)&RStack_2,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle
                    (vh,0,1,2,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle
                    (vh,2,3,0,(MethodInfo *)0x0);
          return;
        }
      }
DAT_?:
      FUN_?();
      pcVar36 = (code *)swi(3);
      (*pcVar36)();
      return;
    }
  }
  FUN_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* RoundedRectangle() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle__ctor
               (RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__Image);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields).borderColor.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (this->fields).borderColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar2 = _UNK_?;
  (this->fields).borderColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields).borderColor.a = (float)uVar2;
  (this->fields).radius = 50.0;
  if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields)._.m_FillCenter = 1;
  (this->fields)._.m_FillMethod = 4;
  (this->fields)._.m_FillAmount = 1.0;
  (this->fields)._.m_FillClockwise = 1;
  (this->fields)._.m_PixelsPerUnitMultiplier = 1.0;
  (this->fields)._.m_CachedReferencePixelsPerUnit = 100.0;
  UnityEngine.UI.dll::UnityEngine::UI::MaskableGraphic::MaskableGraphic__ctor
            ((MaskableGraphic *)this,(MethodInfo *)0x0);
  (this->fields)._._._._useLegacyMeshGeneration_k__BackingField = 0;
  return;
}


/* Rect get_Rectangle() */

Rect * Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_get_Rectangle
                 (Rect *__return_storage_ptr__,RoundedRectangle *this,MethodInfo *method)

{
  pRVar1 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect
                     (&RStack_2,(Graphic *)this,(MethodInfo *)0x0);
  fVar3 = pRVar1->m_YMin;
  fVar4 = pRVar1->m_Width;
  fVar5 = pRVar1->m_Height;
  __return_storage_ptr__->m_XMin = pRVar1->m_XMin;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}

