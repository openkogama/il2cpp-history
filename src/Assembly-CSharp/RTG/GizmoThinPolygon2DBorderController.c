
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinPolygon2DBorderController::
     GizmoThinPolygon2DBorderController_UpdateEpsilons
               (GizmoThinPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) {
    lVar3 = 0x100;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
      lVar3 = 0xf8;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pPVar4 = (pGVar1->fields).BorderPolygon, pPVar4 != (PolygonShape2D *)0x0))
    {
      (pPVar4->fields)._epsilon._wireEps = (float)(*(uint *)(lVar3 + 0x14) & _UNK_?);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinPolygon2DBorderController::
     GizmoThinPolygon2DBorderController_UpdateHandles
               (GizmoThinPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).ThickBorderPolygonIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoPolygon2DBorder *)0x0 &&
        (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      bVar4 = (pGVar3->fields)._isVisible;
      uVar5 = (pGVar1->fields).BorderPolygonIndex;
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

void Assembly-CSharp.dll::RTG::GizmoThinPolygon2DBorderController::
     GizmoThinPolygon2DBorderController_UpdateTransforms
               (GizmoThinPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoPolygon2DBorderControllerData *)0x0) ||
     (pPVar2 = (pGVar1->fields).BorderPolygon, pPVar2 == (PolygonShape2D *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pPVar4 = (pGVar1->fields).TargetPolygon;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__,
                  pPVar4,0);
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
  if (pPVar4 != (PolygonShape2D *)0x0) {
    bVar5 = cRam_? == '\0';
    (pPVar2->fields)._isClosed = (pPVar4->fields)._isClosed;
    if (bVar5) {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar6 = (pPVar4->fields)._cwPolyPoints;
    if (pLVar6 != (List_1_UnityEngine_Vector2_ *)0x0) {
      if ((pLVar6->fields)._size != 0) {
        this_00 = (List_1_UnityEngine_Vector2_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2___ctor_1
                  (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)pLVar6,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                  );
        bVar5 = iRam_? != 0;
        (pPVar2->fields)._cwPolyPoints = this_00;
        if (bVar5) {
          uVar7 = (uint)((ulonglong)&(pPVar2->fields)._cwPolyPoints >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        (pPVar2->fields)._isThickBorderDirty = 1;
        (pPVar2->fields)._isRectDirty = 1;
        return;
      }
      pLVar6 = (pPVar2->fields)._cwPolyPoints;
      if (pLVar6 != (List_1_UnityEngine_Vector2_ *)0x0) {
        piVar11 = &(pLVar6->fields)._version;
        *piVar11 = *piVar11 + 1;
        (pLVar6->fields)._size = 0;
        (pPVar2->fields)._isThickBorderDirty = 1;
        (pPVar2->fields)._isRectDirty = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

