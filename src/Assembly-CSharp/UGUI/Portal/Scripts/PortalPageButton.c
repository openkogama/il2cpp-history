
/* Void ButtonClicked() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_ButtonClicked(PortalPageButton *this,MethodInfo *method)

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
            FUN_?(&UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_);
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
            if ((this_00 != (GameObject *)0x0) && (pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(this_00,UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__), lVar8 != 0)) {
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
              getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>);
              FUN_?(getter,lVar8,MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
              setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>);
              FUN_?(setter,lVar8,MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_);
              iVar14 = (pPVar1->fields)._ActiveIndex_k__BackingField;
              duration = (pPVar1->fields).pageSlideTime;
              if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
                FUN_?();
              }
              DOTween.dll::DG::Tweening::DOTween::DOTween_To(getter,setter,(float)iVar14,duration,(MethodInfo *)0x0);
              pAVar15 = (pPVar1->fields).OnPageChanged;
              if (pAVar15 != (Action_1_PortalPageType_ *)0x0) {
                (*(pAVar15->fields)._._.invoke_impl)((pAVar15->fields)._._.method_code,(pPVar7->fields)._PageType_k__BackingField,(pAVar15->fields)._._.method);
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

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_DisplayAsCurrentPage(PortalPageButton *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable((Selectable *)pBVar1,0,(MethodInfo *)0x0);
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      this_00 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image((Selectable *)pBVar1,(MethodInfo *)0x0);
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        pSStack_2 = (pBVar1->fields)._.m_SpriteState.m_HighlightedSprite;
        pSStack_3 = (pBVar1->fields)._.m_SpriteState.m_PressedSprite;
        if (this_00 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(this_00,(pBVar1->fields)._.m_SpriteState.m_SelectedSprite,(MethodInfo *)0x0);
          pTVar4 = (this->fields).text;
          if (pTVar4 != (Text *)0x0) {
            pSStack_2 = (Sprite *)0x0;
            pSStack_3 = (Sprite *)0x3f8000003f800000;
            (*(pTVar4->klass->vtable).set_color.methodPtr)(pTVar4,&pSStack_2,(pTVar4->klass->vtable).set_color.method);
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

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_DisplayAsNormalPage(PortalPageButton *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable((Selectable *)pBVar1,1,(MethodInfo *)0x0);
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      this_00 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image((Selectable *)pBVar1,(MethodInfo *)0x0);
      if (this_00 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(this_00,(this->fields).normalSprite,(MethodInfo *)0x0);
        pTVar2 = (this->fields).text;
        if (pTVar2 != (Text *)0x0) {
          uStack_3 = 0x3f8000003f800000;
          uStack_4 = 0x3f8000003f800000;
          (*(pTVar2->klass->vtable).set_color.methodPtr)(pTVar2,&uStack_3,(pTVar2->klass->vtable).set_color.method);
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

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_OnDestroy(PortalPageButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<PortalPageType>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_);
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
  this_00 = (UnityAction_1_System_Int32Enum_ *)FUN_?(TypeInfo__System__Action<PortalPageType>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::UnityAction_1_System_Int32Enum___ctor(this_00,(Object *)this,MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar5 = TypeInfo__System__Action<PortalPageType>;
  if (pDVar4 == (Delegate *)0x0) {
    (pPVar1->fields).OnPageChanged = (Action_1_PortalPageType_ *)0x0;
  }
  else {
    pAVar3 = (Action_1_PortalPageType_ *)FUN_?(pDVar4,TypeInfo__System__Action<PortalPageType>);
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

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_PageChanged(PortalPageButton *this,PortalPageType__Enum currentPage,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    if (currentPage == (this->fields).portalPageType) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable((Selectable *)pBVar1,0,(MethodInfo *)0x0);
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image((Selectable *)pBVar1,(MethodInfo *)0x0);
        pBVar1 = (this->fields).button;
        if (pBVar1 != (Button *)0x0) {
          pSStack_3 = (pBVar1->fields)._.m_SpriteState.m_HighlightedSprite;
          pSStack_4 = (pBVar1->fields)._.m_SpriteState.m_PressedSprite;
          if (pIVar2 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(pIVar2,(pBVar1->fields)._.m_SpriteState.m_SelectedSprite,(MethodInfo *)0x0);
            pTVar5 = (this->fields).text;
            if (pTVar5 != (Text *)0x0) {
              pSStack_3 = (Sprite *)0x0;
              goto code_?;
            }
          }
        }
      }
    }
    else {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable((Selectable *)pBVar1,1,(MethodInfo *)0x0);
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        pIVar2 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image((Selectable *)pBVar1,(MethodInfo *)0x0);
        if (pIVar2 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(pIVar2,(this->fields).normalSprite,(MethodInfo *)0x0);
          pTVar5 = (this->fields).text;
          if (pTVar5 != (Text *)0x0) {
            pSStack_3 = (Sprite *)0x3f8000003f800000;
code_?:
            pSStack_4 = (Sprite *)0x3f8000003f800000;
            (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&pSStack_3,(pTVar5->klass->vtable).set_color.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PortalPageButton::PortalPageButton_Start(PortalPageButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<PortalPageType>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__PortalPageButton__ButtonClicked__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_);
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
  if ((pPVar1 != (PortalControl *)0x0) && (pPVar2 = (pPVar1->fields).pageMap, pPVar2 != (PortalControl_PageMapClass__Array *)0x0)) {
    uVar3 = (pPVar1->fields)._ActiveIndex_k__BackingField;
    if ((uint)pPVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pPVar2->vector[(int)uVar3] != (PortalControl_PageMapClass *)0x0) {
      pBVar5 = (this->fields).button;
      if (pBVar5 != (Button *)0x0) {
        if ((pPVar2->vector[(int)uVar3]->fields)._PageType_k__BackingField == (this->fields).portalPageType) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable((Selectable *)pBVar5,0,(MethodInfo *)0x0);
          pBVar5 = (this->fields).button;
          if (pBVar5 == (Button *)0x0) goto code_?;
          pIVar6 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image((Selectable *)pBVar5,(MethodInfo *)0x0);
          pBVar5 = (this->fields).button;
          if (pBVar5 == (Button *)0x0) goto code_?;
          pSStack_7 = (pBVar5->fields)._.m_SpriteState.m_HighlightedSprite;
          pSStack_8 = (pBVar5->fields)._.m_SpriteState.m_PressedSprite;
          if (pIVar6 == (Image *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(pIVar6,(pBVar5->fields)._.m_SpriteState.m_SelectedSprite,(MethodInfo *)0x0);
          pTVar9 = (this->fields).text;
          if (pTVar9 == (Text *)0x0) goto code_?;
          pSStack_7 = (Sprite *)0x0;
        }
        else {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable((Selectable *)pBVar5,1,(MethodInfo *)0x0);
          pBVar5 = (this->fields).button;
          if ((pBVar5 == (Button *)0x0) || (pIVar6 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image((Selectable *)pBVar5,(MethodInfo *)0x0), pIVar6 == (Image *)0x0)) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(pIVar6,(this->fields).normalSprite,(MethodInfo *)0x0);
          pTVar9 = (this->fields).text;
          if (pTVar9 == (Text *)0x0) goto code_?;
          pSStack_7 = (Sprite *)0x3f8000003f800000;
        }
        pSStack_8 = (Sprite *)0x3f8000003f800000;
        (*(pTVar9->klass->vtable).set_color.methodPtr)(pTVar9,&pSStack_7,(pTVar9->klass->vtable).set_color.method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PortalControl);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
        if (pPVar1 != (PortalControl *)0x0) {
          pAVar10 = (pPVar1->fields).OnPageChanged;
          this_00 = (UnityAction_1_System_Int32Enum_ *)FUN_?(TypeInfo__System__Action<PortalPageType>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::UnityAction_1_System_Int32Enum___ctor(this_00,(Object *)this,MethodInfo__UGUI__Portal__Scripts__PortalPageButton__PageChanged_PortalPageType_,(MethodInfo *)0x0);
          pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
          pAVar12 = TypeInfo__System__Action<PortalPageType>;
          if (pDVar11 == (Delegate *)0x0) {
            (pPVar1->fields).OnPageChanged = (Action_1_PortalPageType_ *)0x0;
          }
          else {
            pAVar10 = (Action_1_PortalPageType_ *)FUN_?(pDVar11,TypeInfo__System__Action<PortalPageType>);
            if (pAVar10 == (Action_1_PortalPageType_ *)0x0) {
              FUN_?(pDVar11,pAVar12);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (pPVar1->fields).OnPageChanged = pAVar10;
            pAVar12 = TypeInfo__System__Action<PortalPageType>;
            lVar13 = FUN_?(pDVar11,TypeInfo__System__Action<PortalPageType>);
            if (lVar13 == 0) {
              FUN_?(pDVar11,pAVar12);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(pPVar1->fields).OnPageChanged >> 0xc);
            uVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar17 = uVar15 == *puVar16;
              if (bVar17) {
                *puVar16 = uVar15 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar17);
          }
          pBVar5 = (this->fields).button;
          if (pBVar5 != (Button *)0x0) {
            pBVar18 = (pBVar5->fields).m_OnClick;
            this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(this_01,(Object *)this,MethodInfo__UGUI__Portal__Scripts__PortalPageButton__ButtonClicked__,(MethodInfo *)0x0);
            if (pBVar18 != (Button_ButtonClickedEvent *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_02 = (InvokableCall *)FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
              UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_add_Delegate(this_02,(UnityAction *)this_01,(MethodInfo *)0x0);
              pIVar19 = (pBVar18->fields)._._.m_Calls;
              if (pIVar19 != (InvokableCallList *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar20 = (pIVar19->fields).m_RuntimeCalls;
                if (pLVar20 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                  FUN_?(pLVar20,this_02);
                  (pIVar19->fields).m_NeedsUpdate = 1;
                  return;
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
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

