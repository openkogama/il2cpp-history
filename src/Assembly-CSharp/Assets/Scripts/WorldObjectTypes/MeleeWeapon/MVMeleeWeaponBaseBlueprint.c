
/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBaseBlueprint::MVMeleeWeaponBaseBlueprint_OnEndEditing(MVMeleeWeaponBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) && (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent(this_00,(this->fields)._.cubeModelBaseParent,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds((Bounds *)&stack0xffffffc0,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      fVar3 = (pBVar2->m_Extents).y;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) && (this_01 = (pMVar1->fields)._._.transform, this_01 != (Transform *)0x0)) {
        fVar4 = -0.16;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale((Vector3 *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
        uVar6 = CONCAT44(fVar3 * pVVar5->y * 0.75,fVar4) ^ 0x8000000000000000;
        value.z = -0.16;
        value.x = (float)(int)uVar6;
        value.y = (float)(int)(uVar6 >> 0x20);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

