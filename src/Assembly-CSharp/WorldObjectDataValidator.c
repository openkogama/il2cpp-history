
/* Void Validate(MVWorldObjectClient, String, Object) */

void Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator_Validate
               (MVWorldObjectClient *wo,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectDataValidator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_item);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_blueprint);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pDStackX_8 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  apDStack_2[0] = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (wo != (MVWorldObjectClient *)0x0) {
    pDVar3 = (wo->fields)._.data;
    if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = WorldObjectDataValidator_ValidateForGivenData
                      (pDVar3,key,value,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar3,(Object *)StringLiteral_BlueprintData,(Object **)&pDStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      pDVar5 = pDStackX_8;
      if (bVar4 != 0) {
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        data = pDVar1;
        if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar5->klass->_1).naturalAligment < bVar6) ||
             (data = pDVar5,
             (Dictionary_2_System_Object_System_Object___Class *)
             (pDVar5->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar5,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        bVar4 = WorldObjectDataValidator_ValidateForGivenData
                          (data,key,value,StringLiteral_blueprint,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return;
        }
      }
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar3,(Object *)StringLiteral_itemData,(Object **)apDStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      pDVar3 = apDStack_2[0];
      if (bVar4 != 0) {
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar3->klass->_1).naturalAligment < bVar6) ||
             (pDVar1 = pDVar3,
             (Dictionary_2_System_Object_System_Object___Class *)
             (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar3,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        bVar4 = WorldObjectDataValidator_ValidateForGivenData
                          (pDVar1,key,value,StringLiteral_item,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return;
        }
      }
      if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__WorldObjectDataValidator);
      }
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData;
      if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
        iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar8 < 0) {
          pSVar9 = (String *)func_?(&StringLiteral_Data_not_in_wo_or_in_lazyAddedDa);
          pSVar9 = mscorlib.dll::System::String::String_Format_1
                              (pSVar9,(Object *)key,value,(MethodInfo *)0x0);
          uVar10 = func_?(&TypeInfo__System__Exception);
          pEVar11 = (Exception *)func_?(uVar10);
          mscorlib.dll::System::Exception::Exception__ctor_1(pEVar11,pSVar9,(MethodInfo *)0x0);
          uVar10 = func_?(&
                                       MethodInfo__WorldObjectDataValidator__Validate_MVWorldObjectClient__System__String__System__Object_
                                      );
          FUN_?(pEVar11,uVar10);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__WorldObjectDataValidator);
        }
        pDVar1 = TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData;
        if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
            (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar1,(Object *)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ), pOVar12 != (Object *)0x0)) &&
           (lVar13 = FUN_?(&(pOVar12->klass->_0).byval_arg), value != (Object *)0x0)) {
          lVar14 = FUN_?(&(value->klass->_0).byval_arg);
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          if (lVar13 == lVar14) {
            return;
          }
          uVar10 = func_?(&TypeInfo__WorldObjectDataValidator);
          func_?(uVar10);
          uVar10 = func_?(&TypeInfo__WorldObjectDataValidator);
          puVar15 = (undefined8 *)func_?(uVar10);
          uVar10 = *puVar15;
          FUN_?(uVar10);
          uVar16 = func_?(&
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
          pOVar12 = (Object *)func_?(uVar10,key,uVar16);
          FUN_?(pOVar12);
          arg1 = mscorlib.dll::System::Object::Object_GetType(pOVar12,(MethodInfo *)0x0);
          FUN_?(value);
          arg2 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
          pSVar9 = (String *)func_?(&StringLiteral_Types_does_not_match_lazy_added_);
          pSVar9 = mscorlib.dll::System::String::String_Format_2
                              (pSVar9,(Object *)key,(Object *)arg1,(Object *)arg2,(MethodInfo *)0x0
                              );
          uVar10 = func_?(&TypeInfo__System__Exception);
          pEVar11 = (Exception *)func_?(uVar10);
          mscorlib.dll::System::Exception::Exception__ctor_1(pEVar11,pSVar9,(MethodInfo *)0x0);
          uVar10 = func_?(&
                                       MethodInfo__WorldObjectDataValidator__Validate_MVWorldObjectClient__System__String__System__Object_
                                      );
          FUN_?(pEVar11,uVar10);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean ValidateForGivenData(Dictionary`2[System.Object,System.Object], String, Object, String)
    */

bool Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator_ValidateForGivenData
               (Dictionary_2_System_Object_System_Object_ *data,String *key,Object *value,
               String *dataName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)data,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,(Object *)key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pOVar2 != (Object *)0x0) &&
       (lVar3 = FUN_?(&(pOVar2->klass->_0).byval_arg), value != (Object *)0x0)) {
      lVar4 = FUN_?(&(value->klass->_0).byval_arg);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (lVar3 == lVar4) {
        return 1;
      }
      uVar5 = func_?(&TypeInfo__System__Object);
      args = (Object__Array *)func_?(uVar5,4);
      FUN_?(args);
      FUN_?(args,dataName);
      FUN_?(args,0,dataName);
      FUN_?(args);
      FUN_?(args,key);
      FUN_?(args,1,key);
      FUN_?(data);
      uVar5 = func_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
      pOVar2 = (Object *)func_?(data,key,uVar5);
      FUN_?(pOVar2);
      pTVar6 = mscorlib.dll::System::Object::Object_GetType(pOVar2,(MethodInfo *)0x0);
      FUN_?(args);
      FUN_?(args,pTVar6);
      FUN_?(args,2,pTVar6);
      FUN_?(value);
      pTVar6 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
      FUN_?(args);
      FUN_?(args,pTVar6);
      FUN_?(args,3);
      pSVar7 = (String *)func_?(&StringLiteral_Types_does_not_match_wo__0__data);
      pSVar7 = Mono.Security.dll::Locale::Locale_1_GetText_1(pSVar7,args,(MethodInfo *)0x0);
      uVar5 = func_?(&TypeInfo__System__Exception);
      this = (Exception *)func_?(uVar5);
      mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar7,(MethodInfo *)0x0);
      uVar5 = func_?(&
                                  MethodInfo__WorldObjectDataValidator__ValidateForGivenData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Object__System__String_
                                 );
      FUN_?(this,uVar5);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* WorldObjectDataValidator() */

void Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectDataValidator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_starAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_levelAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lives);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rewardedAd);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_10 = 0x40000000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_test,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar4 = lRam_?;
  pOVar1 = (Object *)0x0;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar5 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar5 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar5 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar3 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << uVar3;
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  else {
    pOVar5 = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_levelAmount,
             pOVar5,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar4 = lRam_?;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar5 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar5 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar5 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar3 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << uVar3;
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  else {
    pOVar5 = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_gameCoinAmount,pOVar5,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar4 = lRam_?;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar5 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar5 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar5 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar3 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << uVar3;
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  else {
    pOVar5 = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_starAmount,
             pOVar5,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar4 = lRam_?;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar5 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar5 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar5 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar3 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << uVar3;
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  else {
    pOVar5 = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_RequiredRank,
             pOVar5,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar4 = lRam_?;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar5 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar5 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar5 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar3 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << uVar3;
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  else {
    pOVar5 = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  uVar11 = CONCAT71((int7)(uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_team,pOVar5,
             (InsertionBehavior__Enum)uVar11,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar4 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar7 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  else {
    pOVar1 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_rewardedAd,
             pOVar1,(InsertionBehavior__Enum)uVar11,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_10 = 0xffffffff;
  pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_Lives,pOVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData =
       (Dictionary_2_System_Object_System_Object_ *)this;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__WorldObjectDataValidator->static_fields >> 0xc);
    uVar3 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar7 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}

