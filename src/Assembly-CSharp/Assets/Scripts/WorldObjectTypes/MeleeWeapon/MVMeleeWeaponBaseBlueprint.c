
/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBaseBlueprint::MVMeleeWeaponBaseBlueprint_OnEndEditing(MVMeleeWeaponBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) && (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent(this_00,(this->fields)._.cubeModelBaseParent,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds((Bounds *)&stack0xffffffb0,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      pRVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current((Regex_CachedCodeEntryKey *)&stack0xffffffd8,(Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)&stack0xffffff98,(MethodInfo *)(pBVar2->m_Center).x);
      pSVar4 = pRVar3->_cultureKey;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) && (this_01 = (pMVar1->fields)._._.transform, this_01 != (Transform *)0x0)) {
        fVar5 = -0.16;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0xbe23d70a);
        uVar7 = CONCAT44((float)pSVar4 * pVVar6->y * 0.75,fVar5) ^ 0x8000000000000000;
        value.z = -0.16;
        value.x = (float)(int)uVar7;
        value.y = (float)(int)(uVar7 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition(this_00,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation(this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
        value_00.z = 0.3;
        value_00.x = 0.3;
        value_00.y = 0.3;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(this_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

