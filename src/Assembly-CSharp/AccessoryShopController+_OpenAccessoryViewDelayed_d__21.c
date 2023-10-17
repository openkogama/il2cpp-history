
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryShopController+<OpenAccessoryViewDelayed>d__21::
     AccessoryShopController_OpenAccessoryViewDelayed_d_21_MoveNext
               (AccessoryShopController_OpenAccessoryViewDelayed_d_21 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pAVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_01 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__UnityEngine__WaitForEndOfFrame)
    ;
    if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(&(this->fields).__2__current,this_01);
      (this->fields).__1__state = 1;
      return 1;
    }
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if ((pAVar2 == (AccessoryShopController *)0x0) ||
       (this_00 = (pAVar2->fields).inventoryController, this_00 == (InventoryController *)0x0))
    goto code_?;
    pAVar5 = (AccessoryViewController *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
                       );
    (pAVar2->fields).accessoryViewController = pAVar5;
    func_?(&(pAVar2->fields).accessoryViewController,pAVar5);
    pAVar5 = (pAVar2->fields).accessoryViewController;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pAVar5 = (pAVar2->fields).accessoryViewController;
      if (pAVar5 == (AccessoryViewController *)0x0) goto code_?;
      AccessoryViewController::AccessoryViewController_OpenAccessoryManagementScreen
                (pAVar5,(pAVar2->fields).accessoryDataToShow,(MethodInfo *)0x0);
      (pAVar2->fields).accessoryDataToShow = (AccessoryDataClient *)0x0;
      func_?(&(pAVar2->fields).accessoryDataToShow,0);
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryShopController+<OpenAccessoryViewDelayed>d__21::
     AccessoryShopController_OpenAccessoryViewDelayed_d_21_System_Collections_IEnumerator_Reset
               (AccessoryShopController_OpenAccessoryViewDelayed_d_21 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

