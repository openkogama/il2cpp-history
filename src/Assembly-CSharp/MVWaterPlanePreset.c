
/* Void Initialize() */

void Assembly-CSharp.dll::MVWaterPlanePreset::MVWaterPlanePreset_Initialize
               (MVWaterPlanePreset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Inserted_Preset_Waterplane_witho);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_waterColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (pDVar1,(Object *)StringLiteral_waterColor,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Inserted_Preset_Waterplane_witho,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&_1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_lethal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_waterColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.waterManager;
  if (this_00 != (WaterPlaneManager *)0x0) {
    WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube
              (this_00,(MVWaterPlane *)this,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._._._._.data;
    (this->fields)._.addedToWPManager = 1;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)StringLiteral_waterColor,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        pDVar4 = (this->fields)._._._._.data;
        array = (Array *)FUN_?(TypeInfo__System__Single,3);
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  (array,__1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field,
                   (MethodInfo *)0x0);
        if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        in_R9D = CONCAT31((int3)(in_R9D >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar4,(Object *)StringLiteral_waterColor,(Object *)array,in_R9D,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)StringLiteral_lethal,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        lVar5 = lRam_?;
        if (iVar3 < 0) {
          pDVar4 = (this->fields)._._._._.data;
          uStackX_8 = 0;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              value = (Object *)FUN_?(lRam_?);
              FUN_?(value + 1,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)(value + 1) >> 0xc);
                puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar8 = *puVar7;
                  LOCK();
                  uVar9 = *puVar7;
                  if (uVar8 == uVar9) {
                    *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar8 != uVar9);
              }
            }
            else {
              value = (Object *)0x0;
            }
          }
          else {
            value = (Object *)((ulonglong)uStackX_9 << 8);
          }
          if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar4,(Object *)StringLiteral_lethal,value,CONCAT31((int3)(in_R9D >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(this->klass->vtable).OnDataUpdate.methodPtr)
                  (this,(this->klass->vtable).OnDataUpdate.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWaterPlanePreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWaterPlanePreset::MVWaterPlanePreset__ctor
               (MVWaterPlanePreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWaterPlane::MVWaterPlane__ctor((MVWaterPlane *)this,data,worldObjects,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

