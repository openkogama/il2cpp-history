
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryShopController+<OpenAccessoryViewDelayed>d__21::
     AccessoryShopController_OpenAccessoryViewDelayed_d_21_MoveNext
               (AccessoryShopController_OpenAccessoryViewDelayed_d_21 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pAVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pOVar3 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    bVar4 = iRam_? != 0;
    (this->fields).__2__current = pOVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((pAVar2 != (AccessoryShopController *)0x0) &&
     (this_00 = (pAVar2->fields).inventoryController, this_00 != (InventoryController *)0x0)) {
    pAVar9 = (AccessoryViewController *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this_00,
                         AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
                        );
    bVar4 = iRam_? != 0;
    (pAVar2->fields).accessoryViewController = pAVar9;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(pAVar2->fields).accessoryViewController >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pAVar9 = (pAVar2->fields).accessoryViewController;
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
    if (pAVar9 == (AccessoryViewController *)0x0) {
      return 0;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar9->fields)._._._._.m_CachedPtr == (void *)0x0) {
      return 0;
    }
    pAVar9 = (pAVar2->fields).accessoryViewController;
    accessoryData = (pAVar2->fields).accessoryDataToShow;
    if ((pAVar9 == (AccessoryViewController *)0x0) ||
       (pAVar10 = (pAVar9->fields).accessoryView, pAVar10 == (AccessoryView *)0x0))
    goto DAT_?;
    if ((pAVar10->fields).accessoryDataClient != (AccessoryDataClient *)0x0) {
      if (accessoryData == (AccessoryDataClient *)0x0) goto DAT_?;
      if ((((pAVar10->fields).accessoryDataClient)->fields)._.aMDID ==
          (accessoryData->fields)._.aMDID) goto code_?;
    }
    AccessoryViewController::AccessoryViewController_HideScreens(pAVar9,(MethodInfo *)0x0);
    pAVar10 = (pAVar9->fields).accessoryView;
    if (pAVar10 != (AccessoryView *)0x0) {
      AccessoryView::AccessoryView_Initialize(pAVar10,accessoryData,(MethodInfo *)0x0);
      pAVar10 = (pAVar9->fields).accessoryView;
      if ((pAVar10 != (AccessoryView *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pAVar10,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        pAVar11 = (pAVar9->fields).backbackController;
        if ((pAVar11 != (AccessoryShopToggleInventory *)0x0) &&
           (pCVar12 = (pAVar11->fields).canvasGroup, pCVar12 != (CanvasGroup *)0x0)) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar12,_UNK_?,(MethodInfo *)0x0);
          pCVar12 = (pAVar11->fields).canvasGroup;
          if (pCVar12 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                      (pCVar12,0,(MethodInfo *)0x0);
            pAVar13 = (pAVar9->fields).previewer;
            if (pAVar13 != (AvatarAccessoryPreviewer *)0x0) {
              AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
                        (pAVar13,(MethodInfo *)0x0);
              pAVar13 = (pAVar9->fields).previewer;
              if (pAVar13 != (AvatarAccessoryPreviewer *)0x0) {
                AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
                          (pAVar13,(MethodInfo *)0x0);
code_?:
                (pAVar2->fields).accessoryDataToShow = (AccessoryDataClient *)0x0;
                func_?(&(pAVar2->fields).accessoryDataToShow);
                return 0;
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryShopController+<OpenAccessoryViewDelayed>d__21::
     AccessoryShopController_OpenAccessoryViewDelayed_d_21_System_Collections_IEnumerator_Reset
               (AccessoryShopController_OpenAccessoryViewDelayed_d_21 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

