
/* InputSignalReceiverClient(MVWorldObject, LogicEvaluateSignalComponentBase, Boolean,
   LogicObjectManager) */

void Assembly-CSharp.dll::InputSignalReceiverClient::InputSignalReceiverClient__ctor
               (InputSignalReceiverClient *this,MVWorldObject *worldObject,
               LogicEvaluateSignalComponentBase *logicEvaluateSignalComponentBase,bool defaultInput,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  pIVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&StringLiteral_iH);
    cRam_? = '\x01';
  }
  MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase__ctor
            ((InputSignalReceiverBase *)this,worldObject,logicEvaluateSignalComponentBase,
             defaultInput,logicObjectManager,(MethodInfo *)0x0);
  if (worldObject != (MVWorldObject *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(worldObject->klass->vtable).get_RunTimeData.method)();
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    pOVar2 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_iH,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        puVar3 = (undefined8 *)func_?();
        uVar4 = (undefined4)*puVar3;
        this = (InputSignalReceiverClient *)*(undefined4 *)(puVar3 + 1);
        iVar5 = (int)((ulonglong)*puVar3 >> 0x20);
        value = (ObscuredBool)CONCAT84(uVar6,uVar4);
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
        ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
        (*(code *)(pIVar1->klass->vtable).set_CurrentlyIsHot.method)();
        (pIVar1->fields)._.firstFrame = 0;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

