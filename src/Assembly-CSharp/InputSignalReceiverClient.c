
/* InputSignalReceiverClient(MVWorldObject, LogicEvaluateSignalComponentBase, Boolean,
   LogicObjectManager) */

void Assembly-CSharp.dll::InputSignalReceiverClient::InputSignalReceiverClient__ctor
               (InputSignalReceiverClient *this,MVWorldObject *worldObject,
               LogicEvaluateSignalComponentBase *logicEvaluateSignalComponentBase,bool defaultInput,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_iH);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase__ctor
            ((InputSignalReceiverBase *)this,worldObject,logicEvaluateSignalComponentBase,
             defaultInput,logicObjectManager,(MethodInfo *)0x0);
  if (worldObject != (MVWorldObject *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(worldObject->klass->vtable).get_RunTimeData.methodPtr)
                          (worldObject,(worldObject->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_iH,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        apOStack_2[0] = pOVar1[1].klass;
        apOStack_2[1]._0_4_ = *(undefined4 *)&pOVar1[1].monitor;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_InternalDecrypt((ObscuredBool *)apOStack_2,(MethodInfo *)0x0);
        (*(this->klass->vtable).set_CurrentlyIsHot.methodPtr)
                  (this,(ulonglong)bVar3,(this->klass->vtable).set_CurrentlyIsHot.method);
        (this->fields)._.firstFrame = 0;
        return;
      }
      FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

