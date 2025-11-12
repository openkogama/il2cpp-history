
/* Void OnCircleShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_OnCircleShapeChanged
               (GizmoCircle2DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
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
       (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoCircle2DBorderController__Array *)0x0
       )) {
      uVar4 = *(uint *)(lVar2 + 0x7c);
      if ((uint)pIVar3->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar6 = pIVar3->vector[(int)uVar4];
      if (pIVar6 != (IGizmoCircle2DBorderController *)0x0) {
        uVar7 = 0;
        pIVar8 = pIVar6->klass;
        uVar9._0_1_ = (pIVar8->_1).rank;
        uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)TypeInfo__RTG__IGizmoCircle2DBorderController) {
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


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_OnGizmoPreUpdateBegin
               (GizmoCircle2DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
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
       (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoCircle2DBorderController__Array *)0x0
       )) {
      uVar4 = *(uint *)(lVar2 + 0x7c);
      if ((uint)pIVar3->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pIVar3->vector[(int)uVar4] != (IGizmoCircle2DBorderController *)0x0) {
        FUN_?(0,TypeInfo__RTG__IGizmoCircle2DBorderController);
        pGVar1 = (this->fields)._planeSlider;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
          uVar4 = 0x110;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            uVar4 = 0x108;
          }
          lVar2 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar4);
          if ((lVar2 != 0) &&
             (pIVar3 = (this->fields)._controllers,
             pIVar3 != (IGizmoCircle2DBorderController__Array *)0x0)) {
            uVar4 = *(uint *)(lVar2 + 0x7c);
            if ((uint)pIVar3->max_length <= uVar4) goto code_?;
            pIVar6 = pIVar3->vector[(int)uVar4];
            if (pIVar6 != (IGizmoCircle2DBorderController *)0x0) {
              uVar7 = 0;
              pIVar8 = pIVar6->klass;
              uVar9._0_1_ = (pIVar8->_1).rank;
              uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
              if (uVar9 != 0) {
                do {
                  if (pIVar8->interfaceOffsets[uVar7].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoCircle2DBorderController) {
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


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_Render
               (GizmoCircle2DBorder *this,Camera *camera,MethodInfo *method)

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
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar2 = 0x108;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      fVar3 = *(float *)(lVar2 + 0x58);
      fVar4 = *(float *)(lVar2 + 0x5c);
      fVar5 = *(float *)(lVar2 + 0x60);
      fVar6 = *(float *)(lVar2 + 100);
      pGVar7 = (this->fields)._targetHandle;
      if ((pGVar7 != (GizmoHandle *)0x0) &&
         (pGVar8 = (pGVar7->fields)._gizmo, pGVar8 != (Gizmo *)0x0)) {
        if ((pGVar8->fields)._hoverInfo._handleId == (((this->fields)._targetHandle)->fields)._id) {
          pGVar1 = (this->fields)._planeSlider;
          uVar9 = 0x110;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            uVar9 = 0x108;
          }
          lVar2 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar9);
          fVar3 = *(float *)(lVar2 + 0x68);
          fVar4 = *(float *)(lVar2 + 0x6c);
          fVar5 = *(float *)(lVar2 + 0x70);
          fVar6 = *(float *)(lVar2 + 0x74);
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
          pMVar10 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
          if (pMVar10 != (Material *)0x0) {
            aCStack_11[0].r = fVar3;
            aCStack_11[0].g = fVar4;
            aCStack_11[0].b = fVar5;
            aCStack_11[0].a = fVar6;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar10,StringLiteral__Color,aCStack_11,(MethodInfo *)0x0);
            pMVar10 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
            if (pMVar10 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                        (pMVar10,0,(MethodInfo *)0x0);
              pGVar7 = (this->fields)._targetHandle;
              if (pGVar7 != (GizmoHandle *)0x0) {
                GizmoHandle::GizmoHandle_Render2DWire_1
                          (pGVar7,camera,(this->fields)._borderCircleIndex,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_SetVisible
               (GizmoCircle2DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
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
       (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoCircle2DBorderController__Array *)0x0
       )) {
      uVar4 = *(uint *)(lVar2 + 0x7c);
      if ((uint)pIVar3->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pIVar3->vector[(int)uVar4] != (IGizmoCircle2DBorderController *)0x0) {
        FUN_?(0,TypeInfo__RTG__IGizmoCircle2DBorderController);
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
             pIVar3 != (IGizmoCircle2DBorderController__Array *)0x0)) {
            uVar4 = *(uint *)(lVar2 + 0x7c);
            if ((uint)pIVar3->max_length <= uVar4) goto code_?;
            if (pIVar3->vector[(int)uVar4] != (IGizmoCircle2DBorderController *)0x0) {
              FUN_?(1);
              GizmoCircle2DBorder_OnCircleShapeChanged(this,(MethodInfo *)0x0);
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


/* GizmoCircle2DBorder(GizmoPlaneSlider2D, GizmoHandle, CircleShape2D) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder__ctor
               (GizmoCircle2DBorder *this,GizmoPlaneSlider2D *planeSlider,GizmoHandle *targetHandle,
               CircleShape2D *targetCircle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CircleShape2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCircle2DBorderControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoCircle2DBorderType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoCircle2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoThinCircle2DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pCVar1 = (CircleShape2D *)FUN_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(pCVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._borderCircle = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderCircle >> 0xc);
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
  pGVar7 = (GizmoCircle2DBorderControllerData *)
            FUN_?(TypeInfo__RTG__GizmoCircle2DBorderControllerData);
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
  pIVar8 = TypeRef__RTG__GizmoCircle2DBorderType;
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
    pIVar13 = (IGizmoCircle2DBorderController__Array *)
              FUN_?(TypeInfo__RTG__IGizmoCircle2DBorderController,iVar12);
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
    (this->fields)._targetCircle = targetCircle;
    if (iVar15 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetCircle >> 0xc);
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
                        (pGVar16,(Shape2D *)(this->fields)._borderCircle,(MethodInfo *)0x0);
      (this->fields)._borderCircleIndex = iVar12;
      pCVar1 = (this->fields)._borderCircle;
      if (pCVar1 != (CircleShape2D *)0x0) {
        (pCVar1->fields)._ptContainMode = 1;
        iVar14 = iRam_?;
        pGVar7 = (this->fields)._controllerData;
        if (pGVar7 != (GizmoCircle2DBorderControllerData *)0x0) {
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
          if (pGVar7 != (GizmoCircle2DBorderControllerData *)0x0) {
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
            if (pGVar7 != (GizmoCircle2DBorderControllerData *)0x0) {
              (pGVar7->fields).BorderCircle = (this->fields)._borderCircle;
              iVar14 = 0;
              if (iVar15 != 0) {
                uVar3 = (uint)((ulonglong)&(pGVar7->fields).BorderCircle >> 0xc);
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
              if (((pGVar7 != (GizmoCircle2DBorderControllerData *)0x0) &&
                  ((pGVar7->fields).BorderCircleIndex = (this->fields)._borderCircleIndex,
                  targetHandle != (GizmoHandle *)0x0)) &&
                 (pGVar7 = (this->fields)._controllerData,
                 pGVar7 != (GizmoCircle2DBorderControllerData *)0x0)) {
                (pGVar7->fields).Gizmo = (targetHandle->fields)._gizmo;
                iVar15 = 0;
                if (iVar14 != 0) {
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
                    iVar15 = iRam_?;
                  } while (!bVar2);
                }
                pGVar7 = (this->fields)._controllerData;
                if (pGVar7 != (GizmoCircle2DBorderControllerData *)0x0) {
                  (pGVar7->fields).TargetHandle = targetHandle;
                  iVar14 = 0;
                  if (iVar15 != 0) {
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
                      iVar14 = iRam_?;
                    } while (!bVar2);
                  }
                  pGVar7 = (this->fields)._controllerData;
                  if (pGVar7 != (GizmoCircle2DBorderControllerData *)0x0) {
                    (pGVar7->fields).TargetCircle = (this->fields)._targetCircle;
                    if (iVar14 != 0) {
                      uVar3 = (uint)((ulonglong)&(pGVar7->fields).TargetCircle >> 0xc);
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
                    pIVar17 = (IGizmoCircle2DBorderController__Class *)(this->fields)._controllerData
                    ;
                    pIVar18 = (IGizmoCircle2DBorderController *)
                              FUN_?(TypeInfo__RTG__GizmoThinCircle2DBorderController);
                    bVar2 = iRam_? != 0;
                    pIVar18[1].klass = pIVar17;
                    if (bVar2) {
                      uVar3 = (uint)((ulonglong)(pIVar18 + 1) >> 0xc);
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
                    if (pIVar13 != (IGizmoCircle2DBorderController__Array *)0x0) {
                      lVar4 = FUN_?(pIVar18,(pIVar13->klass->_0).element_class);
                      if (lVar4 == 0) {
                        uVar10 = FUN_?();
                        FUN_?(uVar10,0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      if ((int)pIVar13->max_length == 0) {
                        FUN_?();
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      bVar2 = iRam_? != 0;
                      pIVar13->vector[0] = pIVar18;
                      if (bVar2) {
                        uVar3 = (uint)((ulonglong)pIVar13->vector >> 0xc);
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
                        pGVar19 = (pGVar16->fields)._gizmo;
                        this_01 = (UnityAction_1_System_Object_ *)
                                  FUN_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  (this_01,(Object *)this,
                                   MethodInfo__RTG__GizmoCircle2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_
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
                                                ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0
                                                );
                            pGVar22 = (GizmoPreUpdateBeginHandler *)0x0;
                            if (pGVar21 != (GizmoPreUpdateBeginHandler *)0x0) {
                              if (pGVar21->klass == TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

