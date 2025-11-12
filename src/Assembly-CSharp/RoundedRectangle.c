
/* Void OnDestroy() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnDestroy(RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
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
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
  c = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_canvas((Graphic *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__UI__GraphicRegistry->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::UI::GraphicRegistry::GraphicRegistry_UnregisterGraphicForCanvas(c,(Graphic *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__UI__CanvasUpdateRegistry->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::UI::CanvasUpdateRegistry::CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild((ICanvasElement *)this,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pMVar4,0.0,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle_OnPopulateMesh(RoundedRectangle *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (vh != (VertexHelper *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    pRVar1 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect(aRStack_2,(Graphic *)this,(MethodInfo *)0x0);
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
    fVar12 = fVar7 + fVar4;
    fVar13 = fVar6 + fVar3;
    lVar14 = FUN_?(TypeInfo__System__Single,3);
    if (lVar14 != 0) {
      if ((*(int *)(lVar14 + 0x18) != 0) && (*(float *)(lVar14 + 0x20) = fVar6 * 0.5, 1 < *(uint *)(lVar14 + 0x18))) {
        *(float *)(lVar14 + 0x24) = fVar7 * 0.5;
        if (2 < *(uint *)(lVar14 + 0x18)) {
          *(float *)(lVar14 + 0x28) = (this->fields).radius;
          iVar15 = *(int *)(lVar14 + 0x18);
          if (iVar15 == 0) {
            fVar6 = 0.0;
          }
          else {
            if (*(int *)(lVar14 + 0x18) == 0) goto DAT_?;
            fVar6 = *(float *)(lVar14 + 0x20);
            uVar16 = 1;
            if (1 < iVar15) {
              lVar17 = 1;
              pfVar18 = (float *)(lVar14 + 0x24);
              do {
                if (*(uint *)(lVar14 + 0x18) <= uVar16) goto DAT_?;
                if (*pfVar18 <= fVar6 && fVar6 != *pfVar18) {
                  fVar6 = *pfVar18;
                }
                uVar16 = uVar16 + 1;
                lVar17 = lVar17 + 1;
                pfVar18 = pfVar18 + 1;
              } while (lVar17 < iVar15);
            }
          }
          fVar7 = (this->fields)._.m_FillAmount;
          fVar19 = (float)(this->fields)._.m_FillOrigin;
          fVar20 = (float)(this->fields)._.m_FillMethod;
          puVar21 = (undefined8 *)(*(this->klass->vtable).get_color.methodPtr)(aRStack_2,this,(this->klass->vtable).get_color.method);
          VStack_22._0_8_ = *puVar21;
          VStack_22._8_8_ = puVar21[1];
          uVar16 = FUN_?(&VStack_22);
          VStack_23.y = fVar7;
          VStack_23.x = fVar20;
          VStack_22.w = 0.0;
          VStack_22.z = fVar6;
          VStack_23.w = 0.0;
          VStack_23.z = fVar19;
          VStack_22._0_8_ = uVar11;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          VStack_25.x = (pVVar24->zeroVector).x;
          VStack_25.y = (pVVar24->zeroVector).y;
          VStack_25.z = (pVVar24->zeroVector).z;
          VStack_25.w = (pVVar24->zeroVector).w;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          VStack_26.z = 0.0;
          VStack_26.x = 1.0;
          VStack_26.y = 0.0;
          VStack_27.x = (pVVar24->zeroVector).x;
          VStack_27.y = (pVVar24->zeroVector).y;
          VStack_27.z = (pVVar24->zeroVector).z;
          VStack_27.w = (pVVar24->zeroVector).w;
          color.r = 0;
          color.g = 0;
          color.b = 0;
          color.a = 0;
          color.rgba = uVar16;
          VStack_28.w = VStack_23.w;
          VStack_28.z = VStack_23.z;
          VStack_28.x = VStack_23.x;
          VStack_28.y = VStack_23.y;
          aRStack_2[0].m_XMin = 0.0;
          aRStack_2[0].m_YMin = 0.0;
          aRStack_2[0].m_Width = 0.0;
          aRStack_2[0].m_Height = 0.0;
          VStack_23.z = 0.0;
          VStack_23._0_8_ = uVar5;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert(vh,(Vector3 *)&VStack_23,color,(Vector4 *)aRStack_2,&VStack_22,&VStack_28,&VStack_25,(Vector3 *)&VStack_26,&VStack_27,(MethodInfo *)0x0);
          puVar21 = (undefined8 *)(*(this->klass->vtable).get_color.methodPtr)(aRStack_2,this,(this->klass->vtable).get_color.method);
          aRStack_2[0]._0_8_ = *puVar21;
          aRStack_2[0]._8_8_ = puVar21[1];
          uVar16 = FUN_?(aRStack_2);
          VStack_22.y = fVar7;
          VStack_22.x = fVar20;
          VStack_26.w = 0.0;
          VStack_22.w = 0.0;
          VStack_22.z = fVar19;
          VStack_26._0_8_ = uVar10;
          VStack_26.z = fVar6;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          aRStack_2[0].m_XMin = (pVVar24->zeroVector).x;
          aRStack_2[0].m_YMin = (pVVar24->zeroVector).y;
          aRStack_2[0].m_Width = (pVVar24->zeroVector).z;
          aRStack_2[0].m_Height = (pVVar24->zeroVector).w;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          VStack_23.z = 0.0;
          color_00.r = 0;
          color_00.g = 0;
          color_00.b = 0;
          color_00.a = 0;
          color_00.rgba = uVar16;
          VStack_28.x = (pVVar24->zeroVector).x;
          VStack_28.y = (pVVar24->zeroVector).y;
          VStack_28.z = (pVVar24->zeroVector).z;
          VStack_28.w = (pVVar24->zeroVector).w;
          VStack_23.x = 0.0;
          VStack_23.y = 1.0;
          VStack_25.w = VStack_26.w;
          VStack_25.z = VStack_26.z;
          VStack_25.x = VStack_26.x;
          VStack_25.y = VStack_26.y;
          VStack_27.x = VStack_22.x;
          VStack_27.y = VStack_22.y;
          VStack_27.z = VStack_22.z;
          VStack_27.w = VStack_22.w;
          VStack_22.x = 0.0;
          VStack_22.y = 1.0;
          VStack_22.z = 0.0;
          VStack_22.w = 0.0;
          VStack_26.y = fVar12;
          VStack_26.x = fVar3;
          VStack_26.z = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert(vh,(Vector3 *)&VStack_26,color_00,&VStack_22,&VStack_25,&VStack_27,(Vector4 *)aRStack_2,(Vector3 *)&VStack_23,&VStack_28,(MethodInfo *)0x0);
          puVar21 = (undefined8 *)(*(this->klass->vtable).get_color.methodPtr)(aRStack_2,this,(this->klass->vtable).get_color.method);
          aRStack_2[0]._0_8_ = *puVar21;
          aRStack_2[0]._8_8_ = puVar21[1];
          uVar16 = FUN_?(aRStack_2);
          VStack_22.y = fVar7;
          VStack_22.x = fVar20;
          VStack_26.w = 0.0;
          VStack_22.w = 0.0;
          VStack_22.z = fVar19;
          VStack_26._0_8_ = uVar9;
          VStack_26.z = fVar6;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          aRStack_2[0].m_XMin = (pVVar24->zeroVector).x;
          aRStack_2[0].m_YMin = (pVVar24->zeroVector).y;
          aRStack_2[0].m_Width = (pVVar24->zeroVector).z;
          aRStack_2[0].m_Height = (pVVar24->zeroVector).w;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          VStack_23.z = 1.0;
          color_01.r = 0;
          color_01.g = 0;
          color_01.b = 0;
          color_01.a = 0;
          color_01.rgba = uVar16;
          VStack_28.x = (pVVar24->zeroVector).x;
          VStack_28.y = (pVVar24->zeroVector).y;
          VStack_28.z = (pVVar24->zeroVector).z;
          VStack_28.w = (pVVar24->zeroVector).w;
          VStack_23.x = 0.0;
          VStack_23.y = 1.0;
          VStack_25.w = VStack_26.w;
          VStack_25.z = VStack_26.z;
          VStack_25.x = VStack_26.x;
          VStack_25.y = VStack_26.y;
          VStack_27.x = VStack_22.x;
          VStack_27.y = VStack_22.y;
          VStack_27.z = VStack_22.z;
          VStack_27.w = VStack_22.w;
          VStack_22.x = 1.0;
          VStack_22.y = 1.0;
          VStack_22.z = 0.0;
          VStack_22.w = 0.0;
          VStack_26.y = fVar12;
          VStack_26.x = fVar13;
          VStack_26.z = 0.0;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert(vh,(Vector3 *)&VStack_26,color_01,&VStack_22,&VStack_25,&VStack_27,(Vector4 *)aRStack_2,(Vector3 *)&VStack_23,&VStack_28,(MethodInfo *)0x0);
          puVar21 = (undefined8 *)(*(this->klass->vtable).get_color.methodPtr)(aRStack_2,this,(this->klass->vtable).get_color.method);
          aRStack_2[0]._0_8_ = *puVar21;
          aRStack_2[0]._8_8_ = puVar21[1];
          uVar16 = FUN_?(aRStack_2);
          VStack_22.y = fVar7;
          VStack_22.x = fVar20;
          VStack_26.w = 0.0;
          VStack_22.w = 0.0;
          VStack_22.z = fVar19;
          VStack_26._0_8_ = uVar8;
          VStack_26.z = fVar6;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          uVar29._0_4_ = (pVVar24->zeroVector).x;
          uVar29._4_4_ = (pVVar24->zeroVector).y;
          uVar30._0_4_ = (pVVar24->zeroVector).z;
          uVar30._4_4_ = (pVVar24->zeroVector).w;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector4);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar24 = TypeInfo__UnityEngine__Vector4->static_fields;
          VStack_23.z = 1.0;
          color_02.r = 0;
          color_02.g = 0;
          color_02.b = 0;
          color_02.a = 0;
          color_02.rgba = uVar16;
          aRStack_2[0].m_XMin = (pVVar24->zeroVector).x;
          aRStack_2[0].m_YMin = (pVVar24->zeroVector).y;
          aRStack_2[0].m_Width = (pVVar24->zeroVector).z;
          aRStack_2[0].m_Height = (pVVar24->zeroVector).w;
          VStack_23.x = 0.0;
          VStack_23.y = 0.0;
          VStack_25.w = VStack_26.w;
          VStack_25.z = VStack_26.z;
          VStack_27.x = VStack_22.x;
          VStack_27.y = VStack_22.y;
          VStack_27.z = VStack_22.z;
          VStack_27.w = VStack_22.w;
          VStack_22.x = 1.0;
          VStack_22.y = 0.0;
          VStack_22.z = 0.0;
          VStack_22.w = 0.0;
          uVar31._4_4_ = fVar4;
          uVar31._0_4_ = fVar13;
          VStack_26.z = 0.0;
          VStack_25.x = VStack_26.x;
          VStack_25.y = VStack_26.y;
          VStack_26._0_8_ = uVar31;
          VStack_28._0_8_ = uVar29;
          VStack_28._8_8_ = uVar30;
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddVert(vh,(Vector3 *)&VStack_26,color_02,&VStack_22,&VStack_25,&VStack_27,&VStack_28,(Vector3 *)&VStack_23,(Vector4 *)aRStack_2,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle(vh,0,1,2,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddTriangle(vh,2,3,0,(MethodInfo *)0x0);
          return;
        }
      }
DAT_?:
      FUN_?();
      pcVar32 = (code *)swi(3);
      (*pcVar32)();
      return;
    }
  }
  FUN_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* RoundedRectangle() */

void Assembly-CSharp.dll::RoundedRectangle::RoundedRectangle__ctor(RoundedRectangle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__Image);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  UnityEngine.UI.dll::UnityEngine::UI::MaskableGraphic::MaskableGraphic__ctor((MaskableGraphic *)this,(MethodInfo *)0x0);
  (this->fields)._._._._useLegacyMeshGeneration_k__BackingField = 0;
  return;
}

