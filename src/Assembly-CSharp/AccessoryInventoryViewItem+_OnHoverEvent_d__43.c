
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnHoverEvent>d__43::
     AccessoryInventoryViewItem_OnHoverEvent_d_43_MoveNext
               (AccessoryInventoryViewItem_OnHoverEvent_d_43 *this,MethodInfo *method)

{
  pAVar1 = this;
  iVar2 = (this->fields).__1__state;
  pAVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._startTime_5__2 = fVar4;
    if ((pAVar3 == (AccessoryInventoryViewItem *)0x0) ||
       (pRVar5 = (pAVar3->fields).previewImage, pRVar5 == (RectTransform *)0x0))
    goto code_?;
    VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                      (pRVar5,(MethodInfo *)0x0);
    (this->fields)._startSize_5__3.x = in_stack_7;
    (this->fields)._startSize_5__3.y = VVar6.y;
    fVar4 = (this->fields).sizeOffset;
    (this->fields)._targetSize_5__4.x = fVar4;
    (this->fields)._targetSize_5__4.y = fVar4;
    this = (AccessoryInventoryViewItem_OnHoverEvent_d_43 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        (this->fields).__1__state = -1;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
    this = (AccessoryInventoryViewItem_OnHoverEvent_d_43 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pAVar3 == (AccessoryInventoryViewItem *)0x0) goto code_?;
  }
  fVar4 = (pAVar1->fields)._startSize_5__3.x;
  fVar8 = (pAVar1->fields)._startSize_5__3.y;
  fVar9 = (pAVar1->fields)._targetSize_5__4.x;
  pRVar5 = (pAVar3->fields).previewImage;
  fVar10 = (pAVar1->fields)._targetSize_5__4.y;
  if ((pAVar3->fields).effectDuration <= (float)this - (pAVar1->fields)._startTime_5__2) {
    if (pRVar5 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar5,(Vector2)((ulonglong)(uint)((fVar10 - fVar8) + fVar8) << 0x20),
                 (MethodInfo *)0x0);
      (pAVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pAVar1->fields).__2__current,0);
      (pAVar1->fields).__1__state = 2;
      return 1;
    }
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pRVar5 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar5,(Vector2)0x0,(MethodInfo *)0x0);
      (pAVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pAVar1->fields).__2__current,0,fVar10,fVar4,fVar9);
      (pAVar1->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnHoverEvent>d__43::
     AccessoryInventoryViewItem_OnHoverEvent_d_43_System_Collections_IEnumerator_Reset
               (AccessoryInventoryViewItem_OnHoverEvent_d_43 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

