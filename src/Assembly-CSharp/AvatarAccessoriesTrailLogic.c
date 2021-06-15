
/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoriesTrailLogic::AvatarAccessoriesTrailLogic_Update
               (AvatarAccessoriesTrailLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object__Class *)0x0;
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).particles;
  pOStack_3 = (Object *)0x0;
  if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    pOStack_1 = (Object__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (pDVar2,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
      b = (this->fields).lastPosition;
      a = *pVVar5;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffe0,a,b,(MethodInfo *)0x0);
      fVar6 = (float10)func_?();
      pfVar7 = &(this->fields).mininumMovementRequirement;
      pOStack_1 = (Object__Class *)&pOStack_1;
      if ((float)fVar6 < *pfVar7 || (float)fVar6 == *pfVar7) {
        func_?();
        return;
      }
      func_?();
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).particles;
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        pOStack_3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                              (pDVar2,(MethodInfo *)0x0);
        func_?(&pOStack_3,0,0);
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
          fVar8 = pVVar5->y;
          fVar9 = pVVar5->z;
          (this->fields).lastPosition.x = pVVar5->x;
          (this->fields).lastPosition.y = fVar8;
          (this->fields).lastPosition.z = fVar9;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* AvatarAccessoriesTrailLogic() */

void Assembly-CSharp.dll::AvatarAccessoriesTrailLogic::AvatarAccessoriesTrailLogic__ctor
               (AvatarAccessoriesTrailLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).lastPosition.x = pVVar1->x;
  (this->fields).lastPosition.y = fVar3;
  (this->fields).lastPosition.z = fVar4;
  (this->fields).mininumMovementRequirement = 0.1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

