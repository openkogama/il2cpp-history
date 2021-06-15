
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AndroidInGameMenu+<OnEnable>c__AnonStorey0::
     AndroidInGameMenu_OnEnable_c_AnonStorey0___m__0
               (AndroidInGameMenu_OnEnable_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).claimGoldRewardPopup;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                       (this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
            ppMVar5 = &(&(x->klass->vtable).Push)[pIVar2->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,1);
code_?:
      (*(code *)*ppMVar5)(x,pOVar1,4,0,4,ppMVar5[1]);
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

