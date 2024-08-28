
/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
     MVCostumeBaseBlueprint_OnEndEditing(MVCostumeBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (this_00,(this->fields)._.cubeModelBaseParent,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         ((Bounds *)&stack0xffffffd8,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      fVar3 = (pBVar2->m_Extents).y;
      fVar4 = (pBVar2->m_Extents).z;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (this_01 = (pMVar1->fields)._._.transform, this_01 != (Transform *)0x0)) {
        fVar5 = 0.0;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
        uVar7 = pVVar6->x;
        uVar8 = pVVar6->y;
        value.y = (float)((uint)(fVar3 * (float)uVar8) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                  _UNK_?;
        value.x = fVar5 * (float)uVar7 * _UNK_?;
        value.z = fVar4 * pVVar6->z * _UNK_?;
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
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x8000;
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x1000;
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x2000;
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x100;
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x100000;
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x200000;
  uVar2 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0xADDR;
  *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar2;
  iVar3 = (this->fields)._._._._.interactionFlags;
  puVar4 = (uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
  *puVar4 = *puVar4 | 2;
  *(int *)&(this->fields)._._._._.interactionFlags = (int)iVar3;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
MVCostumeBaseBlueprint_get_DocumentationType(MVCostumeBaseBlueprint *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Costume;
}

