
/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
               (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  woid = (this->fields)._._._.id;
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 GetGamePointsRewardAmount(Dictionary`2[System.Object,System.Object]) */

int32_t Assembly-CSharp.dll::MVGamePointRewardLogicObject::
        MVGamePointRewardLogicObject_GetGamePointsRewardAmount
                  (MVGamePointRewardLogicObject *this,
                  Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_gamePointAmount);
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        return *piVar3;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean HasGamePoints(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_HasGamePoints
               (MVGamePointRewardLogicObject *this,
               Dictionary_2_System_Object_System_Object_ *dataToCheck,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (dataToCheck != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)dataToCheck,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
               (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  woid = (this->fields)._._._.id;
  gamePointRewardAmount =
       (*(code *)(this->klass->vtable).get_GamePointRewardAmount.method)
                 (this,this->klass[1]._0.image);
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData
            (woid,gamePointRewardAmount,(MethodInfo *)0x0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  return;
}


/* MVGamePointRewardLogicObject(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
               (MVGamePointRewardLogicObject *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  woid = (this->fields)._._._.id;
  gamePointRewardAmount =
       (*(code *)(this->klass->vtable).get_GamePointRewardAmount.method)
                 (this,this->klass[1]._0.image);
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData
            (woid,gamePointRewardAmount,(MethodInfo *)0x0);
  return;
}


/* Int32 get_GamePointRewardAmount() */

int32_t Assembly-CSharp.dll::MVGamePointRewardLogicObject::
        MVGamePointRewardLogicObject_get_GamePointRewardAmount
                  (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._.data;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_gamePointAmount);
    cRam_? = '\x01';
  }
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?(TVar2.m_Index);
        return *piVar4;
      }
      goto code_?;
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* String get_GamePointString() */

String * Assembly-CSharp.dll::MVGamePointRewardLogicObject::
         MVGamePointRewardLogicObject_get_GamePointString
                   (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_gamePointAmount);
    cRam_? = '\x01';
  }
  return StringLiteral_gamePointAmount;
}

