
/* Void Start() */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid_Start
               (RollingNumberDigitAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Transform *)(this->fields).rollingDigitTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    (this->fields).firstNumPosY = pVVar1->y;
    pRVar2 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    if (pRVar2 != (RectTransform *)0x0) {
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (pRVar2,(MethodInfo *)0x0);
      pRVar2 = (RectTransform *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)VVar3.y,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                         );
      if (pRVar2 != (RectTransform *)0x0) {
        VVar3.y = (this->fields).digitSize;
        VVar3.x = (float)puStack_4;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (pRVar2,VVar3,(MethodInfo *)0x0);
        fVar5 = (this->fields).digitSize + (this->fields).firstNumPosY;
        (this->fields).currPos = fVar5;
        (this->fields).targetPosY = fVar5;
        (this->fields).currNumPos = fVar5;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid_Update
               (RollingNumberDigitAndroid *this,MethodInfo *method)

{
  fVar1 = (this->fields).rollTimer;
  if (_UNK_? <= fVar1) {
    pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    fVar1 = (this->fields).targetPosY;
    uStack_5 = uVar4;
  }
  else {
    fVar6 = (this->fields).rollingSpeed;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar8 = (this->fields).currNumPos;
    fVar1 = fVar7 * fVar6 + fVar1;
    (this->fields).rollTimer = fVar1;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
    (this->fields).currPos = ((this->fields).targetPosY - fVar8) * fVar1 + fVar8;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    uVar9 = pVVar3->x;
    fVar1 = (this->fields).currPos;
    uStack_5 = uVar9;
  }
  pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
  if (pTVar2 != (Transform *)0x0) {
    value.y = fVar1;
    value.x = (float)uStack_5;
    value.z = pVVar3->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* RollingNumberDigitAndroid() */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid__ctor
               (RollingNumberDigitAndroid *this,MethodInfo *method)

{
  (this->fields).firstNumPosY = 29.5;
  (this->fields).digitSize = 29.5;
  (this->fields).rollingSpeed = 6.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_Number(Int32) */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
               (RollingNumberDigitAndroid *this,int32_t value,MethodInfo *method)

{
  (this->fields).rollTimer = 0.0;
  if (((this->fields).targetNumber == 9) && (value == 0)) {
    (this->fields).currPos = (this->fields).firstNumPosY;
    pTVar1 = (Transform *)(this->fields).rollingDigitTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (Transform *)(this->fields).rollingDigitTransform;
    uVar3 = pVVar2->x;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    value_00.y = (this->fields).currPos;
    value_00.x = (float)uVar3;
    value_00.z = pVVar2->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar1,value_00,(MethodInfo *)0x0);
    (this->fields).targetNumber = -1;
  }
  pTVar1 = (Transform *)(this->fields).rollingDigitTransform;
  (this->fields).currNumPos =
       (float)((this->fields).targetNumber + 1) * (this->fields).digitSize -
       (float)((uint)(this->fields).firstNumPosY & _UNK_?);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (Transform *)(this->fields).rollingDigitTransform;
    uVar4 = pVVar2->x;
    value_01.y = (this->fields).currNumPos;
    value_01.x = (float)uVar4;
    if (pTVar1 != (Transform *)0x0) {
      value_01.z = pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,value_01,(MethodInfo *)0x0);
      if (value < 0) {
        value = 0;
      }
      else if (9 < value) {
        value = 9;
      }
      fVar5 = (float)((uint)(this->fields).firstNumPosY & _UNK_?);
      (this->fields).targetNumber = value;
      (this->fields).targetPosY = (float)(value + 1) * (this->fields).digitSize - fVar5;
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

