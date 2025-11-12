
/* Void ButtonClicked() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_ButtonClicked
               (PortalPageButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
  if (pPVar1 != (PortalControl *)0x0) {
    pPVar2 = (pPVar1->fields).pageMap;
    uVar3 = 0;
    if (pPVar2 != (PortalControl_PageMapClass__Array *)0x0) {
      uVar4 = (uint)pPVar2->max_length;
      ppPVar5 = pPVar2->vector;
      while( true ) {
        if ((int)uVar4 <= (int)uVar3) {
          return;
        }
        if (uVar4 <= uVar3) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pPVar7 = *ppPVar5;
        if (pPVar7 == (PortalControl_PageMapClass *)0x0) break;
        if ((pPVar7->fields)._PageType_k__BackingField == (this->fields).portalPageType) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>,pPVar7,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__DG__Tweening__DOTween);
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__PortalControl____c__DisplayClass32_0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar8 = FUN_?(TypeInfo__PortalControl____c__DisplayClass32_0);
          if (pPVar7 != (PortalControl_PageMapClass *)0x0) {
            (pPVar1->fields)._ActiveIndex_k__BackingField = (pPVar7->fields)._Index_k__BackingField;
            this_00 = (pPVar1->fields).screenList;
            (pPVar1->fields)._Clicked_k__BackingField = 1;
            if ((this_00 != (GameObject *)0x0) &&
               (pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (this_00,
                                     UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__
                                    ), lVar8 != 0)) {
              bVar10 = iRam_? != 0;
              *(Object **)(lVar8 + 0x10) = pOVar9;
              if (bVar10) {
                uVar3 = (uint)(lVar8 + 0x10U >> 0xc);
                uVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                  puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                  LOCK();
                  bVar10 = uVar12 == *puVar13;
                  if (bVar10) {
                    *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              getter = (DOGetter_1_System_Single_ *)
                       FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>);
              FUN_?(getter,lVar8,
                            MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
              setter = (DOSetter_1_System_Single_ *)
                       FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>);
              FUN_?(setter,lVar8,
                            MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_
                           );
              iVar14 = (pPVar1->fields)._ActiveIndex_k__BackingField;
              duration = (pPVar1->fields).pageSlideTime;
              if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
                FUN_?();
              }
              DOTween.dll::DG::Tweening::DOTween::DOTween_To
                        (getter,setter,(float)iVar14,duration,(MethodInfo *)0x0);
              pAVar15 = (pPVar1->fields).OnPageChanged;
              if (pAVar15 != (Action_1_PortalPageType_ *)0x0) {
                (*(pAVar15->fields)._._.invoke_impl)
                          ((pAVar15->fields)._._.method_code,
                           (pPVar7->fields)._PageType_k__BackingField,(pAVar15->fields)._._.method);
              }
              return;
            }
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = uVar3 + 1;
        ppPVar5 = ppPVar5 + 1;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DisplayAsCurrentPage() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::
     PortalPageButton_DisplayAsCurrentPage(PortalPageButton *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)pBVar1,0,(MethodInfo *)0x0);
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      this_00 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                          ((Selectable *)pBVar1,(MethodInfo *)0x0);
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        pSStack_2 = (pBVar1->fields)._.m_SpriteState.m_HighlightedSprite;
        pSStack_3 = (pBVar1->fields)._.m_SpriteState.m_PressedSprite;
        if (this_00 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (this_00,(pBVar1->fields)._.m_SpriteState.m_SelectedSprite,(MethodInfo *)0x0);
          pTVar4 = (this->fields).text;
          if (pTVar4 != (Text *)0x0) {
            pSStack_2 = _UNK_?;
            pSStack_3 = (Sprite *)_UNK_?;
            (*(pTVar4->klass->vtable).set_color.methodPtr)
                      (pTVar4,&pSStack_2,(pTVar4->klass->vtable).set_color.method);
            return;
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


/* Void DisplayAsNormalPage() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::
     PortalPageButton_DisplayAsNormalPage(PortalPageButton *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)pBVar1,1,(MethodInfo *)0x0);
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      this_00 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                          ((Selectable *)pBVar1,(MethodInfo *)0x0);
      if (this_00 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                  (this_00,(this->fields).normalSprite,(MethodInfo *)0x0);
        pTVar2 = (this->fields).text;
        if (pTVar2 != (Text *)0x0) {
          uStack_3 = _UNK_?;
          uStack_4 = _UNK_?;
          (*(pTVar2->klass->vtable).set_color.methodPtr)
                    (pTVar2,&uStack_3,(pTVar2->klass->vtable).set_color.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_OnDestroy
               (PortalPageButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<PortalPageType>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
  if (pPVar1 == (PortalControl *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pPVar1->fields).OnPageChanged;
  this_00 = (UnityAction_1_System_Int32Enum_ *)
            FUN_?(TypeInfo__System__Action<PortalPageType>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,
             MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_,
             (MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar5 = TypeInfo__System__Action<PortalPageType>;
  if (pDVar4 == (Delegate *)0x0) {
    (pPVar1->fields).OnPageChanged = (Action_1_PortalPageType_ *)0x0;
  }
  else {
    pAVar3 = (Action_1_PortalPageType_ *)
             FUN_?(pDVar4,TypeInfo__System__Action<PortalPageType>);
    if (pAVar3 == (Action_1_PortalPageType_ *)0x0) {
      FUN_?(pDVar4,pAVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pPVar1->fields).OnPageChanged = pAVar3;
    pAVar5 = TypeInfo__System__Action<PortalPageType>;
    lVar6 = FUN_?(pDVar4,TypeInfo__System__Action<PortalPageType>);
    if (lVar6 == 0) {
      FUN_?(pDVar4,pAVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pPVar1->fields).OnPageChanged >> 0xc);
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


/* Void PageChanged(PortalPageType) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_PageChanged
               (PortalPageButton *this,PortalPageType__Enum currentPage,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  pSVar2 = pSStack_3;
  pSVar4 = pSStack_5;
  if (pBVar1 == (Button *)0x0) goto code_?;
  if (currentPage == (this->fields).portalPageType) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)pBVar1,0,(MethodInfo *)0x0);
    pBVar1 = (this->fields).button;
    pSVar2 = pSStack_3;
    pSVar4 = pSStack_5;
    if (pBVar1 == (Button *)0x0) goto code_?;
    pIVar6 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                       ((Selectable *)pBVar1,(MethodInfo *)0x0);
    pBVar1 = (this->fields).button;
    pSVar2 = pSStack_3;
    pSVar4 = pSStack_5;
    if (pBVar1 == (Button *)0x0) goto code_?;
    pSStack_3 = (pBVar1->fields)._.m_SpriteState.m_HighlightedSprite;
    pSStack_5 = (pBVar1->fields)._.m_SpriteState.m_PressedSprite;
    pSVar2 = pSStack_3;
    pSVar4 = pSStack_5;
    if (pIVar6 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar6,(pBVar1->fields)._.m_SpriteState.m_SelectedSprite,(MethodInfo *)0x0);
    pTVar7 = (this->fields).text;
    pSVar8 = _UNK_?;
    uVar9 = _UNK_?;
    pSVar2 = pSStack_3;
    pSVar4 = pSStack_5;
  }
  else {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)pBVar1,1,(MethodInfo *)0x0);
    pBVar1 = (this->fields).button;
    pSVar2 = pSStack_3;
    pSVar4 = pSStack_5;
    if ((pBVar1 == (Button *)0x0) ||
       (pIVar6 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                           ((Selectable *)pBVar1,(MethodInfo *)0x0), pSVar2 = pSStack_3,
       pSVar4 = pSStack_5, pIVar6 == (Image *)0x0)) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar6,(this->fields).normalSprite,(MethodInfo *)0x0);
    pTVar7 = (this->fields).text;
    pSVar8 = _UNK_?;
    uVar9 = _UNK_?;
    pSVar2 = pSStack_3;
    pSVar4 = pSStack_5;
  }
  pSStack_5 = (Sprite *)uVar9;
  pSStack_3 = pSVar8;
  if (pTVar7 != (Text *)0x0) {
    (*(pTVar7->klass->vtable).set_color.methodPtr)
              (pTVar7,&pSStack_3,(pTVar7->klass->vtable).set_color.method);
    return;
  }
code_?:
  pSStack_5 = pSVar4;
  pSStack_3 = pSVar2;
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_Start
               (PortalPageButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<PortalPageType>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__PortalPageButton__ButtonClicked__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
  pSVar2 = pSStack_3;
  pSVar4 = pSStack_5;
  if ((pPVar1 != (PortalControl *)0x0) &&
     (pPVar6 = (pPVar1->fields).pageMap, pPVar6 != (PortalControl_PageMapClass__Array *)0x0)) {
    uVar7 = (pPVar1->fields)._ActiveIndex_k__BackingField;
    if ((uint)pPVar6->max_length <= uVar7) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pPVar6->vector[(int)uVar7] != (PortalControl_PageMapClass *)0x0) {
      pBVar9 = (this->fields).button;
      if (pBVar9 != (Button *)0x0) {
        if ((pPVar6->vector[(int)uVar7]->fields)._PageType_k__BackingField ==
            (this->fields).portalPageType) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    ((Selectable *)pBVar9,0,(MethodInfo *)0x0);
          pBVar9 = (this->fields).button;
          pSVar2 = pSStack_3;
          pSVar4 = pSStack_5;
          if (pBVar9 == (Button *)0x0) goto code_?;
          pIVar10 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                              ((Selectable *)pBVar9,(MethodInfo *)0x0);
          pBVar9 = (this->fields).button;
          pSVar2 = pSStack_3;
          pSVar4 = pSStack_5;
          if (pBVar9 == (Button *)0x0) goto code_?;
          pSStack_3 = (pBVar9->fields)._.m_SpriteState.m_HighlightedSprite;
          pSStack_5 = (pBVar9->fields)._.m_SpriteState.m_PressedSprite;
          pSVar2 = pSStack_3;
          pSVar4 = pSStack_5;
          if (pIVar10 == (Image *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (pIVar10,(pBVar9->fields)._.m_SpriteState.m_SelectedSprite,(MethodInfo *)0x0);
          pTVar11 = (this->fields).text;
          pSVar12 = _UNK_?;
          pSVar13 = _UNK_?;
          pSVar2 = pSStack_3;
          pSVar4 = pSStack_5;
        }
        else {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    ((Selectable *)pBVar9,1,(MethodInfo *)0x0);
          pBVar9 = (this->fields).button;
          pSVar2 = pSStack_3;
          pSVar4 = pSStack_5;
          if ((pBVar9 == (Button *)0x0) ||
             (pIVar10 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                  ((Selectable *)pBVar9,(MethodInfo *)0x0), pSVar2 = pSStack_3,
             pSVar4 = pSStack_5, pIVar10 == (Image *)0x0)) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (pIVar10,(this->fields).normalSprite,(MethodInfo *)0x0);
          pTVar11 = (this->fields).text;
          pSVar12 = _UNK_?;
          pSVar13 = _UNK_?;
          pSVar2 = pSStack_3;
          pSVar4 = pSStack_5;
        }
        pSStack_5 = pSVar13;
        pSStack_3 = pSVar12;
        if (pTVar11 != (Text *)0x0) {
          (*(pTVar11->klass->vtable).set_color.methodPtr)
                    (pTVar11,&pSStack_3,(pTVar11->klass->vtable).set_color.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PortalControl);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar1 = TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
          pSVar2 = pSStack_3;
          pSVar4 = pSStack_5;
          if (pPVar1 != (PortalControl *)0x0) {
            pAVar14 = (pPVar1->fields).OnPageChanged;
            this_00 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(TypeInfo__System__Action<PortalPageType>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_00,(Object *)this,
                       MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_
                       ,(MethodInfo *)0x0);
            pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar14,(Delegate *)this_00,(MethodInfo *)0x0);
            pAVar16 = TypeInfo__System__Action<PortalPageType>;
            if (pDVar15 == (Delegate *)0x0) {
              (pPVar1->fields).OnPageChanged = (Action_1_PortalPageType_ *)0x0;
            }
            else {
              pAVar14 = (Action_1_PortalPageType_ *)
                        FUN_?(pDVar15,TypeInfo__System__Action<PortalPageType>);
              if (pAVar14 == (Action_1_PortalPageType_ *)0x0) {
                FUN_?(pDVar15,pAVar16);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (pPVar1->fields).OnPageChanged = pAVar14;
              pAVar16 = TypeInfo__System__Action<PortalPageType>;
              lVar17 = FUN_?(pDVar15,TypeInfo__System__Action<PortalPageType>);
              if (lVar17 == 0) {
                FUN_?(pDVar15,pAVar16);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&(pPVar1->fields).OnPageChanged >> 0xc);
              uVar18 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
                puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
                LOCK();
                bVar21 = uVar19 == *puVar20;
                if (bVar21) {
                  *puVar20 = uVar19 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar21);
            }
            pBVar9 = (this->fields).button;
            pSVar2 = pSStack_3;
            pSVar4 = pSStack_5;
            if (pBVar9 != (Button *)0x0) {
              pBVar22 = (pBVar9->fields).m_OnClick;
              this_01 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_01,(Object *)this,
                         MethodInfo__UGUI__Portal__Scripts__PortalPageButton__ButtonClicked__,
                         (MethodInfo *)0x0);
              pSVar2 = pSStack_3;
              pSVar4 = pSStack_5;
              if (pBVar22 != (Button_ButtonClickedEvent *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_02 = (InvokableCall *)
                          FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
                UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::
                InvokableCall_add_Delegate(this_02,(UnityAction *)this_01,(MethodInfo *)0x0);
                pIVar23 = (pBVar22->fields)._._.m_Calls;
                if (pIVar23 != (InvokableCallList *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pLVar24 = (pIVar23->fields).m_RuntimeCalls;
                  if (pLVar24 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                    FUN_?(pLVar24,this_02);
                    (pIVar23->fields).m_NeedsUpdate = 1;
                    return;
                  }
                }
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  pSStack_5 = pSVar4;
  pSStack_3 = pSVar2;
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

