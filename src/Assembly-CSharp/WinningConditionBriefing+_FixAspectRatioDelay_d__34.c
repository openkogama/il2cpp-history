
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>d__34::
     WinningConditionBriefing_FixAspectRatioDelay_d_34_MoveNext
               (WinningConditionBriefing_FixAspectRatioDelay_d_34 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
    ppOVar2 = &(this->fields).__2__current;
    *ppOVar2 = (Object *)this_01;
    func_?(ppOVar2,this_01);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    ppOVar2 = &(this->fields).__2__current;
    (this->fields).__1__state = -1;
    *ppOVar2 = (Object *)0x0;
    func_?(ppOVar2,0);
    (this->fields).__1__state = 2;
    return 1;
  }
  if (iVar1 != 2) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((this_00 != (WinningConditionBriefing *)0x0) &&
     (pIVar3 = (this_00->fields).winConImage, pIVar3 != (Image *)0x0)) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pIVar3,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar4,parent,1,(MethodInfo *)0x0);
      pIVar3 = (this_00->fields).winConImage;
      if ((pIVar3 != (Image *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pIVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar4,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>d__34::
     WinningConditionBriefing_FixAspectRatioDelay_d_34_System_Collections_IEnumerator_Reset
               (WinningConditionBriefing_FixAspectRatioDelay_d_34 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WinningConditionBriefing___FixAspectRatioDelay_d__34__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

