
/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBaseBlueprint
     ::MVMeleeWeaponBaseBlueprint_OnEndEditing(MVMeleeWeaponBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (this_00,(this->fields)._.cubeModelBaseParent,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         ((Bounds *)&stack0xffffffc0,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      fVar3 = (pBVar2->m_Extents).y;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (this_01 = (pMVar1->fields)._._.transform, this_01 != (Transform *)0x0)) {
        fVar4 = _UNK_?;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
        value.y = (float)((uint)(fVar3 * pVVar5->y * _UNK_?) ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
        value.x = fVar4;
        value.z = -0.16;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_00,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        value_00.y = (float)_UNK_?;
        value_00.x = (float)_UNK_?;
        value_00.z = 0.3;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

