
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnHoverEvent>c__Iterator0::
     AccessoryInventoryViewItem_OnHoverEvent_c_Iterator0_MoveNext
               (AccessoryInventoryViewItem_OnHoverEvent_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pAVar3 = (this->fields)._this;
    (this->fields)._startTime___0 = fVar2;
    if ((pAVar3 == (AccessoryInventoryViewItem *)0x0) ||
       (pRVar4 = (pAVar3->fields).previewImage, pRVar4 == (RectTransform *)0x0))
    goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                       (pRVar4,(MethodInfo *)0x0);
    (this->fields)._startSize___0.x = VVar5.x;
    (this->fields)._startSize___0.y = VVar5.y;
    func_?();
    (this->fields)._targetSize___0.x = 0.0;
    (this->fields)._targetSize___0.y = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pAVar3 = (this->fields)._this;
  if (pAVar3 != (AccessoryInventoryViewItem *)0x0) {
    if ((pAVar3->fields).effectDuration <= fVar2 - (this->fields)._startTime___0) {
      if (pAVar3 != (AccessoryInventoryViewItem *)0x0) {
        pRVar4 = (pAVar3->fields).previewImage;
        VVar5 = (this->fields)._startSize___0;
        VVar6 = (this->fields)._targetSize___0;
        if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector2);
        }
        VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Lerp
                           (VVar5,VVar6,1.0,(MethodInfo *)0x0);
        if (pRVar4 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar4,VVar5,(MethodInfo *)0x0);
          (this->fields)._current = (Object *)0x0;
          if ((this->fields)._disposing == 0) {
            (this->fields)._PC = 2;
          }
          return 1;
        }
      }
    }
    else if (pAVar3 != (AccessoryInventoryViewItem *)0x0) {
      pVVar7 = (Vector2__Class *)(this->fields)._startSize___0.x;
      pRVar4 = (pAVar3->fields).previewImage;
      fVar2 = (this->fields)._startSize___0.y;
      VVar5 = (this->fields)._targetSize___0;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pVVar9 = TypeInfo__UnityEngine__Vector2;
      fVar10 = (this->fields)._startTime___0;
      pAVar3 = (this->fields)._this;
      if (pAVar3 != (AccessoryInventoryViewItem *)0x0) {
        fVar11 = (pAVar3->fields).effectDuration;
        if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
          func_?();
          pVVar7 = pVVar9;
        }
        VVar6.y = fVar2;
        VVar6.x = (float)pVVar7;
        VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Lerp
                           (VVar6,VVar5,(fVar8 - fVar10) / fVar11,(MethodInfo *)0x0);
        if (pRVar4 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar4,VVar5,(MethodInfo *)0x0);
          (this->fields)._current = (Object *)0x0;
          if ((this->fields)._disposing != 0) {
            return 1;
          }
          (this->fields)._PC = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnHoverEvent>c__Iterator0::
     AccessoryInventoryViewItem_OnHoverEvent_c_Iterator0_Reset
               (AccessoryInventoryViewItem_OnHoverEvent_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

