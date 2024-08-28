
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
    this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
    ppOVar3 = &(this->fields).__2__current;
    *ppOVar3 = (Object *)this_01;
    func_?(ppOVar3,this_01);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if ((pAVar2 == (AccessoryShopController *)0x0) ||
       (this_00 = (pAVar2->fields).inventoryController, this_00 == (InventoryController *)0x0)) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pAVar6 = (AccessoryViewController *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
                       );
    ppAVar7 = &(pAVar2->fields).accessoryViewController;
    *ppAVar7 = pAVar6;
    func_?(ppAVar7,pAVar6);
    pAVar6 = *ppAVar7;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      if (*ppAVar7 == (AccessoryViewController *)0x0) goto code_?;
      ppAVar8 = &(pAVar2->fields).accessoryDataToShow;
      AccessoryViewController::AccessoryViewController_OpenAccessoryManagementScreen
                (*ppAVar7,*ppAVar8,(MethodInfo *)0x0);
      *ppAVar8 = (AccessoryDataClient *)0x0;
      func_?(ppAVar8,0);
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

