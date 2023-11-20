
/* ESSelection+PickResult`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](Vector3, VoxelHit,
   __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::ESSelection+PickResult`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     ESSelection_PickResult_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (ESSelection_PickResult_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Vector3 mousePosition,VoxelHit hit,_Il2CppFullySharedGenericType *data,
               MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[1].klass)->actualSize;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pFVar2 = method->klass->rgctx_data->klass->fields;
  _guard_check_icall(pFVar2,0xc);
  puVar3 = (undefined8 *)func_?(this,pFVar2);
  *puVar3 = mousePosition._0_8_;
  *(float *)(puVar3 + 1) = mousePosition.z;
  func_?(pFVar2->type,puVar3,0);
  pFVar2 = method->klass->rgctx_data->klass->fields;
  pFVar4 = pFVar2 + 1;
  _guard_check_icall(pFVar4,0x48);
  pfVar5 = (float *)func_?(this,pFVar4);
  *pfVar5 = hit.point.x;
  pfVar5[1] = hit.point.y;
  pfVar5[2] = hit.point.z;
  pfVar5[3] = hit.normal.x;
  pfVar5[4] = hit.normal.y;
  pfVar5[5] = hit.normal.z;
  pfVar5[6] = (float)hit.cubePos._0_4_;
  pfVar5[7] = (float)hit._28_4_;
  pfVar5[8] = (float)hit.face;
  pfVar5[9] = (float)hit._36_4_;
  pfVar5[10] = (float)hit.woId;
  pfVar5[0xb] = (float)hit.cube;
  pfVar5[0xc] = hit.distance;
  pfVar5[0xd] = (float)hit.collider;
  pfVar5[0xe] = (float)hit.transform;
  pfVar5[0xf] = (float)hit._60_4_;
  *(int64_t *)(pfVar5 + 0x10) = hit.interactionFlags;
  func_?(pFVar2[1].type,pfVar5,0);
  func_?(&stack0xfffffff0);
  func_?(this,method->klass->rgctx_data->klass->fields + 2,&stack0xfffffff0,uVar1);
  return;
}

