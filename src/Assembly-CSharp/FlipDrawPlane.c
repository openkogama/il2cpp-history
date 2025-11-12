
/* Void Awake() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_Awake(FlipDrawPlane *this,MethodInfo *method)

{
  pIVar1 = (this->fields).XAxisImage;
  if (pIVar1 != (Image *)0x0) {
    fStack_2 = (this->fields).NormalColor.r;
    fStack_3 = (this->fields).NormalColor.g;
    fStack_4 = (this->fields).NormalColor.b;
    fStack_5 = (this->fields).NormalColor.a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
    pIVar1 = (this->fields).YAxisImage;
    if (pIVar1 != (Image *)0x0) {
      fStack_2 = (this->fields).SelectedColor.r;
      fStack_3 = (this->fields).SelectedColor.g;
      fStack_4 = (this->fields).SelectedColor.b;
      fStack_5 = (this->fields).SelectedColor.a;
      (*(pIVar1->klass->vtable).set_color.methodPtr)
                (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
      pIVar1 = (this->fields).ZAxisImage;
      if (pIVar1 != (Image *)0x0) {
        fStack_2 = (this->fields).NormalColor.r;
        fStack_3 = (this->fields).NormalColor.g;
        fStack_4 = (this->fields).NormalColor.b;
        fStack_5 = (this->fields).NormalColor.a;
        (*(pIVar1->klass->vtable).set_color.methodPtr)
                  (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
        bVar6 = iRam_? != 0;
        (this->fields).currentlySelectedImage = (this->fields).YAxisImage;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DrawPlane);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar11 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar11 != (DrawPlaneControllerUUI *)0x0) &&
           (this_00 = (pDVar11->fields).worldEditorDrawPlane, this_00 != (WorldEditorDrawPlane *)0x0)
           ) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_13._0_4_ = (pVVar12->upVector).x;
          uStack_13._4_4_ = (pVVar12->upVector).y;
          fStack_14 = (pVVar12->upVector).z;
          uStack_15 = 0;
          uStack_16 = 0;
          pcVar17 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pcRam_? = pcVar17;
          (*pcRam_?)(0,&uStack_13,&uStack_15);
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          fStack_2 = (float)uStack_15;
          fStack_3 = (float)uStack_15._4_4_;
          fStack_4 = (float)(undefined4)uStack_16;
          fStack_5 = (float)uStack_16._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar19 = (obj->fields)._._.m_CachedPtr;
          if (pvVar19 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pcVar17 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pcRam_? = pcVar17;
          (*pcRam_?)(pvVar19);
          bVar20 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
                            (this_00,(MethodInfo *)0x0);
          if (bVar20 == 0) {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                      (this_00,(MethodInfo *)0x0);
          }
          else {
            WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos(this_00,(MethodInfo *)0x0);
          }
          WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
                    (this_00,(MethodInfo *)0x0);
          WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
          (this_00->fields).drawPlaneAxis = 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Flip() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_Flip(FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).drawPlaneAxises;
  iVar2 = (this->fields).currentIndex + 1;
  (this->fields).currentIndex = iVar2;
  if (pLVar1 != (List_1_DrawPlaneAxis_ *)0x0) {
    uVar3 = iVar2 % (pLVar1->fields)._size;
    (this->fields).currentIndex = uVar3;
    if (pLVar1 != (List_1_DrawPlaneAxis_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pDVar5 = (pLVar1->fields)._items;
      if (pDVar5 != (DrawPlaneAxis__Enum__Array *)0x0) {
        if ((uint)pDVar5->max_length <= uVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        value = pDVar5->vector[(int)uVar3];
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DrawPlane);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar6 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar6 != (DrawPlaneControllerUUI *)0x0) &&
           (pWVar7 = (pDVar6->fields).worldEditorDrawPlane, pWVar7 != (WorldEditorDrawPlane *)0x0))
        {
          WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation(pWVar7,value,(MethodInfo *)0x0)
          ;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__DrawPlane,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar6 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
          if ((pDVar6 != (DrawPlaneControllerUUI *)0x0) &&
             (pWVar7 = (pDVar6->fields).worldEditorDrawPlane, pWVar7 != (WorldEditorDrawPlane *)0x0)
             ) {
            pIVar8 = (this->fields).currentlySelectedImage;
            iVar2 = (pWVar7->fields).drawPlaneAxis;
            if (pIVar8 != (Image *)0x0) {
              fStack_9 = (this->fields).NormalColor.r;
              fStack_10 = (this->fields).NormalColor.g;
              fStack_11 = (this->fields).NormalColor.b;
              fStack_12 = (this->fields).NormalColor.a;
              (*(pIVar8->klass->vtable).set_color.methodPtr)
                        (pIVar8,&fStack_9,(pIVar8->klass->vtable).set_color.method);
              if (iVar2 == 0) {
                bVar13 = iRam_? != 0;
                (this->fields).currentlySelectedImage = (this->fields).XAxisImage;
                if (bVar13) {
                  uVar3 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
                  lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
                    puVar16 = (ulonglong *)(lVar14 + 0xADDR);
                    LOCK();
                    bVar13 = uVar15 == *puVar16;
                    if (bVar13) {
                      *puVar16 = uVar15 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
              }
              else if (iVar2 == 1) {
                bVar13 = iRam_? != 0;
                (this->fields).currentlySelectedImage = (this->fields).YAxisImage;
                if (bVar13) {
                  uVar3 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
                  lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
                    puVar16 = (ulonglong *)(lVar14 + 0xADDR);
                    LOCK();
                    bVar13 = uVar15 == *puVar16;
                    if (bVar13) {
                      *puVar16 = uVar15 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
              }
              else if ((iVar2 == 2) &&
                      (bVar13 = iRam_? != 0,
                      (this->fields).currentlySelectedImage = (this->fields).ZAxisImage, bVar13)) {
                uVar3 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
                lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar16 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar13 = uVar15 == *puVar16;
                  if (bVar13) {
                    *puVar16 = uVar15 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar13);
              }
              pIVar8 = (this->fields).currentlySelectedImage;
              if (pIVar8 != (Image *)0x0) {
                fStack_9 = (this->fields).SelectedColor.r;
                fStack_10 = (this->fields).SelectedColor.g;
                fStack_11 = (this->fields).SelectedColor.b;
                fStack_12 = (this->fields).SelectedColor.a;
                (*(pIVar8->klass->vtable).set_color.methodPtr)
                          (pIVar8,&fStack_9,(pIVar8->klass->vtable).set_color.method);
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
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HighlightImages() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_HighlightImages
               (FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    pIVar3 = (this->fields).currentlySelectedImage;
    iVar4 = (pWVar2->fields).drawPlaneAxis;
    if (pIVar3 != (Image *)0x0) {
      fStack_5 = (this->fields).NormalColor.r;
      fStack_6 = (this->fields).NormalColor.g;
      fStack_7 = (this->fields).NormalColor.b;
      fStack_8 = (this->fields).NormalColor.a;
      (*(pIVar3->klass->vtable).set_color.methodPtr)
                (pIVar3,&fStack_5,(pIVar3->klass->vtable).set_color.method);
      if (iVar4 == 0) {
        bVar9 = iRam_? != 0;
        (this->fields).currentlySelectedImage = (this->fields).XAxisImage;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
          lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
      else if (iVar4 == 1) {
        bVar9 = iRam_? != 0;
        (this->fields).currentlySelectedImage = (this->fields).YAxisImage;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
          lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
      else if ((iVar4 == 2) &&
              (bVar9 = iRam_? != 0,
              (this->fields).currentlySelectedImage = (this->fields).ZAxisImage, bVar9)) {
        uVar10 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pIVar3 = (this->fields).currentlySelectedImage;
      if (pIVar3 != (Image *)0x0) {
        fStack_5 = (this->fields).SelectedColor.r;
        fStack_6 = (this->fields).SelectedColor.g;
        fStack_7 = (this->fields).SelectedColor.b;
        fStack_8 = (this->fields).SelectedColor.a;
        (*(pIVar3->klass->vtable).set_color.methodPtr)
                  (pIVar3,&fStack_5,(pIVar3->klass->vtable).set_color.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitalizeImages() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_InitalizeImages
               (FlipDrawPlane *this,MethodInfo *method)

{
  pIVar1 = (this->fields).XAxisImage;
  if (pIVar1 != (Image *)0x0) {
    fStack_2 = (this->fields).NormalColor.r;
    fStack_3 = (this->fields).NormalColor.g;
    fStack_4 = (this->fields).NormalColor.b;
    fStack_5 = (this->fields).NormalColor.a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
    pIVar1 = (this->fields).YAxisImage;
    if (pIVar1 != (Image *)0x0) {
      fStack_2 = (this->fields).SelectedColor.r;
      fStack_3 = (this->fields).SelectedColor.g;
      fStack_4 = (this->fields).SelectedColor.b;
      fStack_5 = (this->fields).SelectedColor.a;
      (*(pIVar1->klass->vtable).set_color.methodPtr)
                (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
      pIVar1 = (this->fields).ZAxisImage;
      if (pIVar1 != (Image *)0x0) {
        fStack_2 = (this->fields).NormalColor.r;
        fStack_3 = (this->fields).NormalColor.g;
        fStack_4 = (this->fields).NormalColor.b;
        fStack_5 = (this->fields).NormalColor.a;
        (*(pIVar1->klass->vtable).set_color.methodPtr)
                  (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
        bVar6 = iRam_? != 0;
        (this->fields).currentlySelectedImage = (this->fields).YAxisImage;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
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
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_OnEnable
               (FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).drawPlaneAxises;
  uVar2 = 0;
  if (pLVar1 != (List_1_DrawPlaneAxis_ *)0x0) {
    lVar3 = 0x20;
    cVar4 = cRam_?;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DrawPlane,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar5 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar5 != (DrawPlaneControllerUUI *)0x0) &&
           (pWVar6 = (pDVar5->fields).worldEditorDrawPlane, pWVar6 != (WorldEditorDrawPlane *)0x0))
        {
          pIVar7 = (this->fields).currentlySelectedImage;
          iVar8 = (pWVar6->fields).drawPlaneAxis;
          if (pIVar7 != (Image *)0x0) {
            fStack_9 = (this->fields).NormalColor.r;
            fStack_10 = (this->fields).NormalColor.g;
            fStack_11 = (this->fields).NormalColor.b;
            fStack_12 = (this->fields).NormalColor.a;
            (*(pIVar7->klass->vtable).set_color.methodPtr)
                      (pIVar7,&fStack_9,(pIVar7->klass->vtable).set_color.method);
            if (iVar8 == 0) {
              bVar13 = iRam_? != 0;
              (this->fields).currentlySelectedImage = (this->fields).XAxisImage;
              if (bVar13) {
                uVar2 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
                lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar14 = *(ulonglong *)(lVar3 + 0xADDR);
                  puVar15 = (ulonglong *)(lVar3 + 0xADDR);
                  LOCK();
                  bVar13 = uVar14 == *puVar15;
                  if (bVar13) {
                    *puVar15 = uVar14 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar13);
              }
            }
            else if (iVar8 == 1) {
              bVar13 = iRam_? != 0;
              (this->fields).currentlySelectedImage = (this->fields).YAxisImage;
              if (bVar13) {
                uVar2 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
                lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar14 = *(ulonglong *)(lVar3 + 0xADDR);
                  puVar15 = (ulonglong *)(lVar3 + 0xADDR);
                  LOCK();
                  bVar13 = uVar14 == *puVar15;
                  if (bVar13) {
                    *puVar15 = uVar14 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar13);
              }
            }
            else if ((iVar8 == 2) &&
                    (bVar13 = iRam_? != 0,
                    (this->fields).currentlySelectedImage = (this->fields).ZAxisImage, bVar13)) {
              uVar2 = (uint)((ulonglong)&(this->fields).currentlySelectedImage >> 0xc);
              lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar3 + 0xADDR);
                puVar15 = (ulonglong *)(lVar3 + 0xADDR);
                LOCK();
                bVar13 = uVar14 == *puVar15;
                if (bVar13) {
                  *puVar15 = uVar14 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            pIVar7 = (this->fields).currentlySelectedImage;
            if (pIVar7 != (Image *)0x0) {
              fStack_9 = (this->fields).SelectedColor.r;
              fStack_10 = (this->fields).SelectedColor.g;
              fStack_11 = (this->fields).SelectedColor.b;
              fStack_12 = (this->fields).SelectedColor.a;
              (*(pIVar7->klass->vtable).set_color.methodPtr)
                        (pIVar7,&fStack_9,(pIVar7->klass->vtable).set_color.method);
              return;
            }
          }
        }
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pLVar1 = (this->fields).drawPlaneAxises;
      if (pLVar1 == (List_1_DrawPlaneAxis_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pDVar17 = (pLVar1->fields)._items;
      if (pDVar17 == (DrawPlaneAxis__Enum__Array *)0x0) break;
      if ((uint)pDVar17->max_length <= uVar2) {
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar8 = *(int *)((longlong)pDVar17->vector + lVar3 + -0x20);
      if (cVar4 == '\0') {
        FUN_?(&TypeInfo__DrawPlane);
        LOCK();
        UNLOCK();
        cVar4 = '\x01';
        cRam_? = '\x01';
      }
      pDVar5 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
      if ((pDVar5 == (DrawPlaneControllerUUI *)0x0) ||
         (pWVar6 = (pDVar5->fields).worldEditorDrawPlane, pWVar6 == (WorldEditorDrawPlane *)0x0))
      break;
      if (iVar8 == (pWVar6->fields).drawPlaneAxis) {
        (this->fields).currentIndex = uVar2;
        goto code_?;
      }
      pLVar1 = (this->fields).drawPlaneAxises;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 4;
      if (pLVar1 == (List_1_DrawPlaneAxis_ *)0x0) break;
    } while( true );
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* FlipDrawPlane() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane__ctor(FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<DrawPlaneAxis>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_UInt32Enum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<DrawPlaneAxis>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__List__);
  pMVar1 = MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_;
  if (this_00 != (List_1_System_UInt32Enum_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar3 = (this_00->fields)._items;
    if (pUVar3 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar3->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar3->max_length <= uVar4) goto code_?;
      pUVar3->vector[(int)uVar4] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,1,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_;
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar3 = (this_00->fields)._items;
    if (pUVar3 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar3->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar3->max_length <= uVar4) goto code_?;
      pUVar3->vector[(int)uVar4] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_;
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar3 = (this_00->fields)._items;
    if (pUVar3 != (UInt32Enum__Enum__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pUVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        if ((uint)pUVar3->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar3->vector[(int)uVar4] = 2;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this_00,2,pMVar1->klass->rgctx_data[0xe].method);
      }
      bVar6 = iRam_? != 0;
      (this->fields).drawPlaneAxises = (List_1_DrawPlaneAxis_ *)this_00;
      if (bVar6) {
        uVar4 = (uint)((ulonglong)&(this->fields).drawPlaneAxises >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
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
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

