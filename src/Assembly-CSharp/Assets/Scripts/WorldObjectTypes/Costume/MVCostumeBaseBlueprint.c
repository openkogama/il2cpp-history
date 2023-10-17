
/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
     MVCostumeBaseBlueprint_OnEndEditing(MVCostumeBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (String *)(pMVar1->fields)._._.transform, this_00 != (String *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              ((Transform *)this_00,(this->fields)._.cubeModelBaseParent,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         ((Bounds *)&stack0xffffffcc,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      pRVar3 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                         ((Regex_CachedCodeEntryKey *)&puStack_4,
                          (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffffb4,(MethodInfo *)(pBVar2->m_Center).x);
      fVar5 = (float)pRVar3->_options;
      fVar6 = (float)pRVar3->_cultureKey;
      pSVar7 = pRVar3->_pattern;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (this_01 = (pMVar1->fields)._._.transform, this_01 != (Transform *)0x0)) {
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
        puStack_4 = (undefined *)pVVar8->x;
        unique0x0000a404 = (String *)pVVar8->y;
        value.y = (float)((uint)((float)unique0x0000a404 * fVar6) ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
                  _UNK_?;
        value.x = (float)puStack_4 * fVar5 * _UNK_?;
        value.z = pVVar8->z * (float)pSVar7 * _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  ((Transform *)this_00,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  ((Transform *)this_00,
                   TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        value_00.y = (float)_UNK_?;
        value_00.x = (float)_UNK_?;
        stack0xfffffff4 = this_00;
        value_00.z = 0.3;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  ((Transform *)this_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVCostumeBaseBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
     MVCostumeBaseBlueprint__ctor
               (MVCostumeBaseBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields)._.cubeModelId = -1;
  (this->fields)._.cubeModelPid = -1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  iVar1 = (this->fields)._._._._.interactionFlags;
  *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) =
       *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
  puVar2 = (uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
  *puVar2 = *puVar2 | 2;
  *(uint *)&(this->fields)._._._._.interactionFlags = (uint)iVar1 | 0xADDR;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
MVCostumeBaseBlueprint_get_DocumentationType(MVCostumeBaseBlueprint *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Costume;
}

