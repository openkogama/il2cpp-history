
/* Boolean Equals(MVNetworkReporter+SendTransformData) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_Equals
               (MVNetworkReporter_SendTransformData *this,MVNetworkReporter_SendTransformData *other
               ,MethodInfo *method)

{
  uVar1 = (this->position).x;
  uVar2 = (this->position).y;
  uVar3 = (other->position).x;
  fVar4 = (other->position).z - (this->position).z;
  fVar5 = (other->position).y - (float)uVar2;
  if (_UNK_? <=
      fVar5 * fVar5 + ((float)uVar3 - (float)uVar1) * ((float)uVar3 - (float)uVar1) + fVar4 * fVar4)
  {
    return 0;
  }
  pBVar6 = other->rotation;
  if (pBVar6 == (Byte__Array *)0x0) {
code_?:
    FUN_?(_UNK_?,pBVar6,method);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  if ((int)pBVar6->max_length != 0) {
    method = (MethodInfo *)(ulonglong)pBVar6->vector[0];
    pBVar9 = this->rotation;
    if (pBVar9 == (Byte__Array *)0x0) goto code_?;
    if ((int)pBVar9->max_length != 0) {
      if (pBVar6->vector[0] != pBVar9->vector[0]) {
        return 0;
      }
      if (pBVar6 == (Byte__Array *)0x0) goto code_?;
      if (1 < (uint)pBVar6->max_length) {
        method = (MethodInfo *)(ulonglong)pBVar6->vector[1];
        pBVar9 = this->rotation;
        if (pBVar9 == (Byte__Array *)0x0) goto code_?;
        if (1 < (uint)pBVar9->max_length) {
          if (pBVar6->vector[1] != pBVar9->vector[1]) {
            return 0;
          }
          if (pBVar6 == (Byte__Array *)0x0) goto code_?;
          if (2 < (uint)pBVar6->max_length) {
            pBVar9 = this->rotation;
            if (pBVar9 == (Byte__Array *)0x0) goto code_?;
            if (2 < (uint)pBVar9->max_length) {
              return pBVar6->vector[2] == pBVar9->vector[2];
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_Equals_1
               (MVNetworkReporter_SendTransformData *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__MVNetworkReporter__SendTransformData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkReporter__SendTransformData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    pIVar2 = TypeRef__MVNetworkReporter__SendTransformData;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar2 == (Il2CppType *)0x0) {
      lVar3 = 0;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar3 = FUN_?(pIVar2,1);
      lVar3 = FUN_?(lVar3 + 0x20);
    }
    if (lVar1 == lVar3) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__MVNetworkReporter__SendTransformData->_0).element_class) {
        pOStack_4 = obj[1].klass;
        pMStack_5 = obj[1].monitor;
        pOStack_6 = obj[2].klass;
        bVar7 = MVNetworkReporter_SendTransformData_Equals
                          (this,(MVNetworkReporter_SendTransformData *)&pOStack_4,(MethodInfo *)0x0
                          );
        return bVar7;
      }
      FUN_?(obj);
      pcVar8 = (code *)swi(3);
      bVar7 = (*pcVar8)();
      return bVar7;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
        MVNetworkReporter_SendTransformData_GetHashCode
                  (MVNetworkReporter_SendTransformData *this,MethodInfo *method)

{
  fVar1 = (this->position).x;
  if (0x7f7fffff < ((int)fVar1 - 1U & 0x7fffffff)) {
    fVar1 = (float)((uint)fVar1 & 0x7f800000);
  }
  fVar2 = (this->position).y;
  if (0x7f7fffff < ((int)fVar2 - 1U & 0x7fffffff)) {
    fVar2 = (float)((uint)fVar2 & 0x7f800000);
  }
  fVar3 = (this->position).z;
  if (0x7f7fffff < ((int)fVar3 - 1U & 0x7fffffff)) {
    fVar3 = (float)((uint)fVar3 & 0x7f800000);
  }
  if (this->rotation == (Byte__Array *)0x0) {
    uVar4 = 0;
  }
  else {
    pBVar5 = this->rotation->klass;
    uVar6._0_2_ = pBVar5[1]._0.byval_arg.attrs;
    uVar6._2_1_ = pBVar5[1]._0.byval_arg.type;
    uVar6._3_5_ = *(undefined5 *)&pBVar5[1]._0.byval_arg.field_0xb;
    uVar4 = (*(code *)pBVar5[1]._0.byval_arg.data)(this->rotation,uVar6);
  }
  return ((int)fVar2 * 4 ^ (int)fVar3 >> 2 ^ (uint)fVar1) * 0x18d ^ uVar4;
}


/* Boolean op_Equality(MVNetworkReporter+SendTransformData, MVNetworkReporter+SendTransformData) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_op_Equality
               (MVNetworkReporter_SendTransformData *std1,MVNetworkReporter_SendTransformData *std2,
               MethodInfo *method)

{
  MStack_1.position.x = (std2->position).x;
  MStack_1.position.y = (std2->position).y;
  MStack_1._8_8_ = *(undefined8 *)&(std2->position).z;
  MStack_1.rotation = std2->rotation;
  bVar2 = MVNetworkReporter_SendTransformData_Equals(std1,&MStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean op_Inequality(MVNetworkReporter+SendTransformData, MVNetworkReporter+SendTransformData)
    */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_op_Inequality
               (MVNetworkReporter_SendTransformData *std1,MVNetworkReporter_SendTransformData *std2,
               MethodInfo *method)

{
  MStack_1.position.x = (std2->position).x;
  MStack_1.position.y = (std2->position).y;
  MStack_1._8_8_ = *(undefined8 *)&(std2->position).z;
  MStack_1.rotation = std2->rotation;
  bVar2 = MVNetworkReporter_SendTransformData_Equals(std1,&MStack_1,(MethodInfo *)0x0);
  return bVar2 ^ 1;
}

