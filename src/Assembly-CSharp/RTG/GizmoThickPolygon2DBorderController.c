
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThickPolygon2DBorderController::
     GizmoThickPolygon2DBorderController_UpdateEpsilons
               (GizmoThickPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) {
    lVar3 = 0x100;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
      lVar3 = 0xf8;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) &&
       (pPVar4 = (pGVar1->fields).ThickBorderPolygon, pPVar4 != (PolygonShape2D *)0x0)) {
      (pPVar4->fields)._epsilon._thickWireEps = (float)(*(uint *)(lVar3 + 0x18) & _UNK_?);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThickPolygon2DBorderController::
     GizmoThickPolygon2DBorderController_UpdateHandles
               (GizmoThickPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).BorderPolygonIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoPolygon2DBorder *)0x0 &&
        (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      bVar4 = (pGVar3->fields)._isVisible;
      uVar5 = (pGVar1->fields).ThickBorderPolygonIndex;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar6 = (pGVar2->fields)._2DShapes;
      if (pLVar6 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
        if ((uint)(pLVar6->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pGVar8 = (pLVar6->fields)._items;
        if (pGVar8 != (GizmoHandleShape2D__Array *)0x0) {
          if ((uint)pGVar8->max_length <= uVar5) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (pGVar8->vector[(int)uVar5] != (GizmoHandleShape2D *)0x0) {
            (pGVar8->vector[(int)uVar5]->fields)._isVisible = bVar4;
            return;
          }
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoThickPolygon2DBorderController::
     GizmoThickPolygon2DBorderController_UpdateTransforms
               (GizmoThickPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
      (pPVar2 = (pGVar1->fields).ThickBorderPolygon, pPVar2 != (PolygonShape2D *)0x0)) &&
     (method = (MethodInfo *)(pGVar1->fields).PlaneSlider,
     (GizmoPlaneSlider2D *)method != (GizmoPlaneSlider2D *)0x0)) {
    lVar3 = 0x110;
    if ((((GizmoPlaneSlider2D *)method)->fields)._sharedLookAndFeel ==
        (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar3 = 0x108;
    }
    lVar3 = *(longlong *)((longlong)&((GizmoPlaneSlider2D *)method)->klass + lVar3);
    if ((lVar3 != 0) &&
       (pPVar4 = (pPVar2->fields)._borderRenderDesc,
       pPVar4 != (PolygonShape2D_BorderRenderDescriptor *)0x0)) {
      (pPVar4->fields)._thickness = (float)(*(uint *)(lVar3 + 0x84) & _UNK_?);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) {
        pPVar2 = (pGVar1->fields).ThickBorderPolygon;
        this = (GizmoThickPolygon2DBorderController *)0x0;
        if (pPVar2 != (PolygonShape2D *)0x0) {
          pPVar5 = (pGVar1->fields).TargetPolygon;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__
                          ,pPVar5,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pPVar5 != (PolygonShape2D *)0x0) {
            bVar6 = cRam_? == '\0';
            (pPVar2->fields)._isClosed = (pPVar5->fields)._isClosed;
            if (bVar6) {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar7 = (pPVar5->fields)._cwPolyPoints;
            if (pLVar7 != (List_1_UnityEngine_Vector2_ *)0x0) {
              if ((pLVar7->fields)._size != 0) {
                this_00 = (List_1_UnityEngine_Vector2_ *)
                          FUN_?(
                                       TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                       );
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2___ctor_1
                          (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)pLVar7,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                          );
                bVar6 = iRam_? != 0;
                (pPVar2->fields)._cwPolyPoints = this_00;
                if (bVar6) {
                  uVar8 = (uint)((ulonglong)&(pPVar2->fields)._cwPolyPoints >> 0xc);
                  puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar10 = *puVar9;
                    LOCK();
                    uVar11 = *puVar9;
                    if (uVar10 == uVar11) {
                      *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar10 != uVar11);
                }
                (pPVar2->fields)._isThickBorderDirty = 1;
                (pPVar2->fields)._isRectDirty = 1;
                return;
              }
              pLVar7 = (pPVar2->fields)._cwPolyPoints;
              if (pLVar7 != (List_1_UnityEngine_Vector2_ *)0x0) {
                piVar12 = &(pLVar7->fields)._version;
                *piVar12 = *piVar12 + 1;
                (pLVar7->fields)._size = 0;
                (pPVar2->fields)._isThickBorderDirty = 1;
                (pPVar2->fields)._isRectDirty = 1;
                return;
              }
            }
          }
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
    }
  }
  FUN_?(this,method);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

