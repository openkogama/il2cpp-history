
/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_OnGizmoPreUpdateBegin
               (GizmoPolygon2DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    lVar2 = 0x110;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar2 = 0x108;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if ((lVar2 != 0) &&
       (pIVar3 = (this->fields)._controllers,
       pIVar3 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
      uVar4 = *(uint *)(lVar2 + 0x80);
      if ((uint)pIVar3->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pIVar3->vector[(int)uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
        FUN_?(0,TypeInfo__RTG__IGizmoPolygon2DBorderController);
        pGVar1 = (this->fields)._planeSlider;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
          uVar4 = 0x110;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            uVar4 = 0x108;
          }
          lVar2 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar4);
          if ((lVar2 != 0) &&
             (pIVar3 = (this->fields)._controllers,
             pIVar3 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
            uVar4 = *(uint *)(lVar2 + 0x80);
            if ((uint)pIVar3->max_length <= uVar4) goto code_?;
            pIVar6 = pIVar3->vector[(int)uVar4];
            if (pIVar6 != (IGizmoPolygon2DBorderController *)0x0) {
              uVar7 = 0;
              pIVar8 = pIVar6->klass;
              uVar9._0_1_ = (pIVar8->_1).rank;
              uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
              if (uVar9 != 0) {
                do {
                  if (pIVar8->interfaceOffsets[uVar7].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoPolygon2DBorderController) {
                    ppIVar10 = &(&(pIVar8->vtable).UpdateHandles)
                                [pIVar8->interfaceOffsets[uVar7].offset + 1].methodPtr;
                    UNRECOVERED_JUMPTABLE = *ppIVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*UNRECOVERED_JUMPTABLE)(pIVar6,(MethodInfo *)ppIVar10[1],UNRECOVERED_JUMPTABLE)
                    ;
                    return;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar9);
              }
              puVar11 = (undefined8 *)FUN_?(pIVar6);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar11)(pIVar6,puVar11[1],(code *)*puVar11);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPolygonShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_OnPolygonShapeChanged
               (GizmoPolygon2DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    lVar2 = 0x110;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar2 = 0x108;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if ((lVar2 != 0) &&
       (pIVar3 = (this->fields)._controllers,
       pIVar3 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
      uVar4 = *(uint *)(lVar2 + 0x80);
      if ((uint)pIVar3->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar6 = pIVar3->vector[(int)uVar4];
      if (pIVar6 != (IGizmoPolygon2DBorderController *)0x0) {
        uVar7 = 0;
        pIVar8 = pIVar6->klass;
        uVar9._0_1_ = (pIVar8->_1).rank;
        uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)TypeInfo__RTG__IGizmoPolygon2DBorderController) {
              ppIVar10 = &(&(pIVar8->vtable).UpdateHandles)
                          [pIVar8->interfaceOffsets[uVar7].offset + 2].methodPtr;
              UNRECOVERED_JUMPTABLE = *ppIVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(pIVar6,(MethodInfo *)ppIVar10[1],UNRECOVERED_JUMPTABLE);
              return;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar9);
        }
        puVar11 = (undefined8 *)FUN_?(pIVar6);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar11)(pIVar6,puVar11[1],(code *)*puVar11);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_Render
               (GizmoPolygon2DBorder *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isVisible == 0) {
    return;
  }
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    lVar2 = 0x110;
    lVar3 = 0x110;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar3 = 0x108;
    }
    lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
    if (lVar3 != 0) {
      fVar4 = *(float *)(lVar3 + 0x58);
      fVar5 = *(float *)(lVar3 + 0x5c);
      fVar6 = *(float *)(lVar3 + 0x60);
      fVar7 = *(float *)(lVar3 + 100);
      pGVar8 = (this->fields)._targetHandle;
      if ((pGVar8 != (GizmoHandle *)0x0) &&
         (pGVar9 = (pGVar8->fields)._gizmo, pGVar9 != (Gizmo *)0x0)) {
        if ((pGVar9->fields)._hoverInfo._handleId == (((this->fields)._targetHandle)->fields)._id) {
          pGVar1 = (this->fields)._planeSlider;
          uVar10 = 0x110;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            uVar10 = 0x108;
          }
          lVar3 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar10);
          fVar4 = *(float *)(lVar3 + 0x68);
          fVar5 = *(float *)(lVar3 + 0x6c);
          fVar6 = *(float *)(lVar3 + 0x70);
          fVar7 = *(float *)(lVar3 + 0x74);
        }
        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_00 = (GizmoLineMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
        if (this_00 != (GizmoLineMaterial *)0x0) {
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar11 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
          if (pMVar11 != (Material *)0x0) {
            aCStack_12[0].r = fVar4;
            aCStack_12[0].g = fVar5;
            aCStack_12[0].b = fVar6;
            aCStack_12[0].a = fVar7;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar11,StringLiteral__Color,aCStack_12,(MethodInfo *)0x0);
            pMVar11 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
            if (pMVar11 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                        (pMVar11,0,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._planeSlider;
              if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
                lVar3 = 0x110;
                if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                  lVar3 = 0x108;
                }
                lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x80) == 0) {
                    pGVar8 = (this->fields)._targetHandle;
                    if (pGVar8 != (GizmoHandle *)0x0) {
                      shapeIndex = (this->fields)._borderPolygonIndex;
                      goto code_?;
                    }
                  }
                  else {
                    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0)
                    {
                      lVar2 = 0x108;
                    }
                    if (*(int *)(*(longlong *)((longlong)&pGVar1->klass + lVar2) + 0x80) != 1) {
                      return;
                    }
                    pGVar8 = (this->fields)._targetHandle;
                    if (pGVar8 != (GizmoHandle *)0x0) {
                      shapeIndex = (this->fields)._thickBorderPolygonIndex;
code_?:
                      GizmoHandle::GizmoHandle_Render2DWire_1
                                (pGVar8,camera,shapeIndex,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetHoverable
               (GizmoPolygon2DBorder *this,bool isHoverable,MethodInfo *method)

{
  (this->fields)._isHoverable = isHoverable;
  pGVar1 = (this->fields)._targetHandle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set2DShapeHoverable
              (pGVar1,(this->fields)._borderPolygonIndex,isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._targetHandle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      uVar2 = (this->fields)._thickBorderPolygonIndex;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar3 = (pGVar1->fields)._2DShapes;
      if (pLVar3 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
        if ((uint)(pLVar3->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pGVar5 = (pLVar3->fields)._items;
        if (pGVar5 != (GizmoHandleShape2D__Array *)0x0) {
          if ((uint)pGVar5->max_length <= uVar2) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (pGVar5->vector[(int)uVar2] != (GizmoHandleShape2D *)0x0) {
            (pGVar5->vector[(int)uVar2]->fields)._isHoverable = isHoverable;
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetVisible
               (GizmoPolygon2DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  (this->fields)._isVisible = isVisible;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    lVar2 = 0x110;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar2 = 0x108;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if ((lVar2 != 0) &&
       (pIVar3 = (this->fields)._controllers,
       pIVar3 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
      uVar4 = *(uint *)(lVar2 + 0x80);
      if ((uint)pIVar3->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pIVar3->vector[(int)uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
        FUN_?(0,TypeInfo__RTG__IGizmoPolygon2DBorderController);
        if ((this->fields)._isVisible == 0) {
          return;
        }
        pGVar1 = (this->fields)._planeSlider;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
          uVar4 = 0x110;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            uVar4 = 0x108;
          }
          lVar2 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar4);
          if ((lVar2 != 0) &&
             (pIVar3 = (this->fields)._controllers,
             pIVar3 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
            uVar4 = *(uint *)(lVar2 + 0x80);
            if ((uint)pIVar3->max_length <= uVar4) goto code_?;
            if (pIVar3->vector[(int)uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
              FUN_?(1);
              GizmoPolygon2DBorder_OnPolygonShapeChanged(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GizmoPolygon2DBorder(GizmoPlaneSlider2D, GizmoHandle, PolygonShape2D) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder__ctor
               (GizmoPolygon2DBorder *this,GizmoPlaneSlider2D *planeSlider,GizmoHandle *targetHandle
               ,PolygonShape2D *targetPolygon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPolygon2DBorderControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoPolygon2DBorderType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoPolygon2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoThickPolygon2DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoThinPolygon2DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PolygonShape2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pPVar1 = (PolygonShape2D *)FUN_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._borderPolygon = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderPolygon >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pPVar1 = (PolygonShape2D *)FUN_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._thickBorderPolygon = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._thickBorderPolygon >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar7 = (GizmoPolygon2DBorderControllerData *)
            FUN_?(TypeInfo__RTG__GizmoPolygon2DBorderControllerData);
  bVar2 = iRam_? != 0;
  (this->fields)._controllerData = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pIVar8 = TypeRef__RTG__GizmoPolygon2DBorderType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar9 = (longlong *)0x0;
  if (pIVar8 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar8,1);
    plVar9 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar9 == (longlong *)0x0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar10);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    uVar10 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_02,uVar10);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_00 = (Array *)(**(code **)(*plVar9 + 0x888))(plVar9);
  if (this_00 != (Array *)0x0) {
    iVar12 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
    pIVar13 = (IGizmoPolygon2DBorderController__Array *)
              FUN_?(TypeInfo__RTG__IGizmoPolygon2DBorderController,iVar12);
    (this->fields)._controllers = pIVar13;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    iVar14 = iRam_?;
    (this->fields)._planeSlider = planeSlider;
    if (iVar14 != 0) {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar14 = iRam_?;
      } while (!bVar2);
    }
    (this->fields)._targetHandle = targetHandle;
    iVar15 = 0;
    if (iVar14 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetHandle >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar15 = iRam_?;
      } while (!bVar2);
    }
    (this->fields)._targetPolygon = targetPolygon;
    if (iVar15 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetPolygon >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pGVar16 = (this->fields)._targetHandle;
    if (pGVar16 != (GizmoHandle *)0x0) {
      iVar12 = GizmoHandle::GizmoHandle_Add2DShape
                        (pGVar16,(Shape2D *)(this->fields)._borderPolygon,(MethodInfo *)0x0);
      (this->fields)._borderPolygonIndex = iVar12;
      pPVar1 = (this->fields)._borderPolygon;
      if (pPVar1 != (PolygonShape2D *)0x0) {
        (pPVar1->fields)._ptContainMode = 1;
        pGVar16 = (this->fields)._targetHandle;
        if (pGVar16 != (GizmoHandle *)0x0) {
          iVar12 = GizmoHandle::GizmoHandle_Add2DShape
                            (pGVar16,(Shape2D *)(this->fields)._thickBorderPolygon,(MethodInfo *)0x0)
          ;
          (this->fields)._thickBorderPolygonIndex = iVar12;
          pPVar1 = (this->fields)._thickBorderPolygon;
          if (pPVar1 != (PolygonShape2D *)0x0) {
            (pPVar1->fields)._ptContainMode = 1;
            pPVar1 = (this->fields)._thickBorderPolygon;
            if ((pPVar1 != (PolygonShape2D *)0x0) &&
               (pPVar17 = (pPVar1->fields)._borderRenderDesc,
               pPVar17 != (PolygonShape2D_BorderRenderDescriptor *)0x0)) {
              (pPVar17->fields)._borderType = 1;
              pPVar1 = (this->fields)._thickBorderPolygon;
              if ((pPVar1 != (PolygonShape2D *)0x0) &&
                 (pPVar17 = (pPVar1->fields)._borderRenderDesc,
                 pPVar17 != (PolygonShape2D_BorderRenderDescriptor *)0x0)) {
                (pPVar17->fields)._direction = 1;
                iVar14 = iRam_?;
                pGVar7 = (this->fields)._controllerData;
                if (pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) {
                  (pGVar7->fields).Border = this;
                  if (iVar14 != 0) {
                    uVar3 = (uint)((ulonglong)&(pGVar7->fields).Border >> 0xc);
                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                      iVar14 = iRam_?;
                    } while (!bVar2);
                  }
                  pGVar7 = (this->fields)._controllerData;
                  if (pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) {
                    (pGVar7->fields).PlaneSlider = (this->fields)._planeSlider;
                    iVar15 = 0;
                    if (iVar14 != 0) {
                      uVar3 = (uint)((ulonglong)&(pGVar7->fields).PlaneSlider >> 0xc);
                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                        iVar15 = iRam_?;
                      } while (!bVar2);
                    }
                    pGVar7 = (this->fields)._controllerData;
                    if (pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) {
                      (pGVar7->fields).BorderPolygon = (this->fields)._borderPolygon;
                      iVar14 = 0;
                      if (iVar15 != 0) {
                        uVar3 = (uint)((ulonglong)&(pGVar7->fields).BorderPolygon >> 0xc);
                        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                          iVar14 = iRam_?;
                        } while (!bVar2);
                      }
                      pGVar7 = (this->fields)._controllerData;
                      if (pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) {
                        (pGVar7->fields).BorderPolygonIndex = (this->fields)._borderPolygonIndex;
                        pGVar7 = (this->fields)._controllerData;
                        if (pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) {
                          (pGVar7->fields).ThickBorderPolygon = (this->fields)._thickBorderPolygon;
                          iVar15 = 0;
                          if (iVar14 != 0) {
                            uVar3 = (uint)((ulonglong)&(pGVar7->fields).ThickBorderPolygon >> 0xc)
                            ;
                            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                              LOCK();
                              bVar2 = uVar5 == *puVar6;
                              if (bVar2) {
                                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                              }
                              UNLOCK();
                              iVar15 = iRam_?;
                            } while (!bVar2);
                          }
                          pGVar7 = (this->fields)._controllerData;
                          if (((pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) &&
                              ((pGVar7->fields).ThickBorderPolygonIndex =
                                    (this->fields)._thickBorderPolygonIndex,
                              targetHandle != (GizmoHandle *)0x0)) &&
                             (pGVar7 = (this->fields)._controllerData,
                             pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0)) {
                            (pGVar7->fields).Gizmo = (targetHandle->fields)._gizmo;
                            iVar14 = 0;
                            if (iVar15 != 0) {
                              uVar3 = (uint)((ulonglong)&pGVar7->fields >> 0xc);
                              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                LOCK();
                                bVar2 = uVar5 == *puVar6;
                                if (bVar2) {
                                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                }
                                UNLOCK();
                                iVar14 = iRam_?;
                              } while (!bVar2);
                            }
                            pGVar7 = (this->fields)._controllerData;
                            if (pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) {
                              (pGVar7->fields).TargetHandle = targetHandle;
                              iVar15 = 0;
                              if (iVar14 != 0) {
                                uVar3 = (uint)((ulonglong)&(pGVar7->fields).TargetHandle >> 0xc);
                                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                do {
                                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                  iVar15 = iRam_?;
                                } while (!bVar2);
                              }
                              pGVar7 = (this->fields)._controllerData;
                              if (pGVar7 != (GizmoPolygon2DBorderControllerData *)0x0) {
                                (pGVar7->fields).TargetPolygon = (this->fields)._targetPolygon;
                                if (iVar15 != 0) {
                                  uVar3 = (uint)((ulonglong)&(pGVar7->fields).TargetPolygon >> 0xc
                                                 );
                                  lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                    puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                    LOCK();
                                    bVar2 = uVar5 == *puVar6;
                                    if (bVar2) {
                                      *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar2);
                                }
                                pIVar13 = (this->fields)._controllers;
                                pGVar7 = (this->fields)._controllerData;
                                lVar4 = FUN_?(
                                                  TypeInfo__RTG__GizmoThinPolygon2DBorderController)
                                ;
                                bVar2 = iRam_? != 0;
                                *(GizmoPolygon2DBorderControllerData **)(lVar4 + 0x10) = pGVar7;
                                if (bVar2) {
                                  uVar3 = (uint)(lVar4 + 0x10U >> 0xc);
                                  lVar18 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar5 = *(ulonglong *)(lVar18 + 0xADDR);
                                    puVar6 = (ulonglong *)(lVar18 + 0xADDR);
                                    LOCK();
                                    bVar2 = uVar5 == *puVar6;
                                    if (bVar2) {
                                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar2);
                                }
                                if (pIVar13 != (IGizmoPolygon2DBorderController__Array *)0x0) {
                                  lVar18 = FUN_?(lVar4,(pIVar13->klass->_0).element_class);
                                  if (lVar18 == 0) {
                                    uVar10 = FUN_?();
                                    FUN_?(uVar10,0);
                                    pcVar11 = (code *)swi(3);
                                    (*pcVar11)();
                                    return;
                                  }
                                  FUN_?(pIVar13,0,lVar4);
                                  pIVar13 = (this->fields)._controllers;
                                  pGVar7 = (this->fields)._controllerData;
                                  lVar4 = FUN_?(
                                                  TypeInfo__RTG__GizmoThickPolygon2DBorderController
                                                  );
                                  bVar2 = iRam_? != 0;
                                  *(GizmoPolygon2DBorderControllerData **)(lVar4 + 0x10) = pGVar7;
                                  if (bVar2) {
                                    uVar3 = (uint)(lVar4 + 0x10U >> 0xc);
                                    lVar18 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                    do {
                                      uVar5 = *(ulonglong *)(lVar18 + 0xADDR);
                                      puVar6 = (ulonglong *)(lVar18 + 0xADDR);
                                      LOCK();
                                      bVar2 = uVar5 == *puVar6;
                                      if (bVar2) {
                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (!bVar2);
                                  }
                                  if (pIVar13 != (IGizmoPolygon2DBorderController__Array *)0x0) {
                                    lVar18 = FUN_?(lVar4,(pIVar13->klass->_0).element_class
                                                          );
                                    if (lVar18 == 0) {
                                      uVar10 = FUN_?();
                                      FUN_?(uVar10,0);
                                      pcVar11 = (code *)swi(3);
                                      (*pcVar11)();
                                      return;
                                    }
                                    FUN_?(pIVar13,1,lVar4);
                                    pGVar16 = (this->fields)._targetHandle;
                                    if (pGVar16 != (GizmoHandle *)0x0) {
                                      pGVar19 = (pGVar16->fields)._gizmo;
                                      this_01 = (UnityAction_1_System_Object_ *)
                                                FUN_?(
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`1[System::Object]::
                                      UnityAction_1_System_Object___ctor
                                                (this_01,(Object *)this,
                                                 MethodInfo__RTG__GizmoPolygon2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                                 ,(MethodInfo *)0x0);
                                      if (pGVar19 != (Gizmo *)0x0) {
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        ppGVar20 = &(pGVar19->fields).PreUpdateBegin;
                                        a = (pGVar19->fields).PreUpdateBegin;
                                        do {
                                          pGVar21 = (GizmoPreUpdateBeginHandler *)
                                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                                              ((Delegate *)a,(Delegate *)this_01,
                                                               (MethodInfo *)0x0);
                                          pGVar22 = (GizmoPreUpdateBeginHandler *)0x0;
                                          if (pGVar21 != (GizmoPreUpdateBeginHandler *)0x0) {
                                            if (pGVar21->klass ==
                                                TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
                                              pGVar22 = pGVar21;
                                            }
                                            if (pGVar22 == (GizmoPreUpdateBeginHandler *)0x0) {
                                              FUN_?(pGVar21);
                                              pcVar11 = (code *)swi(3);
                                              (*pcVar11)();
                                              return;
                                            }
                                          }
                                          LOCK();
                                          pGVar21 = *ppGVar20;
                                          bVar2 = a == pGVar21;
                                          if (bVar2) {
                                            *ppGVar20 = pGVar22;
                                            pGVar21 = a;
                                          }
                                          UNLOCK();
                                          pGVar22 = a;
                                          if (!bVar2) {
                                            pGVar22 = pGVar21;
                                          }
                                          if (iRam_? != 0) {
                                            uVar3 = (uint)((ulonglong)ppGVar20 >> 0xc);
                                            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                            do {
                                              uVar23 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                              puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                              LOCK();
                                              bVar2 = uVar23 == *puVar6;
                                              if (bVar2) {
                                                *puVar6 = uVar23 | 1L << (uVar3 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar2);
                                          }
                                          bVar2 = pGVar22 != a;
                                          a = pGVar22;
                                        } while (bVar2);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

